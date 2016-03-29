/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Brig.h"
#include <iostream>
using namespace std;

Brig::Brig(){

	store = new Storage;
}
Brig::~Brig(){
	
	delete store;

}
int Brig::addPirate(Pirate* pirate)
{

	CArray *cells;
	store->retrieve(&cells);
	Cell* newCell;
	int index = -1;
	int rc;

	for (int i=0; i<cells->getSize(); ++i) 
	    if (cells->get(i)->fits(pirate)) 
	      index = i;

	if (index >= 0) {

	    rc = cells->get(index)->getPirates().add(pirate);

	    if (rc != C_OK)
	      return C_NOK;

	    cells->get(index)->reduceSpace(pirate->getSpace());

	}
	else {
		
	    newCell = new Cell(7);
	    cells->add(newCell);
	    rc = newCell->getPirates().add(pirate);
	    if (rc != C_OK)
	      return C_NOK;
	    newCell->reduceSpace(pirate->getSpace());
	}
	  
	store->update(ADD, cells);
	
	
	return C_OK;
}

CArray& Brig::getCells() { 
	CArray *cArray;
  store->retrieve(&cArray);

  return *cArray;
}

