/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 3 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Mar 10 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Brig.h"

#include <iostream>
using namespace std;

Brig::Brig(){

	
	cells = new CArray;
}
Brig::~Brig(){
	
	delete cells;

}
int Brig::addPirate(Pirate* pirate)
{

	
	Cell* newCell;
	int index = -1;
	int rc;

	for (int i=0; i<cells->getSize(); ++i) 
	    if (cells->get(i)->fits(pirate)) 
	      index = i;

	if (index >= 0) {

	    rc = cells->get(index)->getPirates().push(pirate);

	    if (rc != C_OK)
	      return C_NOK;

	    cells->get(index)->reduceSpace(pirate->getSpace());

	}
	else {
		
	    newCell = new Cell(7);
	    cells->add(newCell);
	    rc = newCell->getPirates().push(pirate);
	    if (rc != C_OK)
	      return C_NOK;
	    newCell->reduceSpace(pirate->getSpace());
	}
	  

	
	
	return C_OK;
}

CArray& Brig::getCells() { 
	
  return *cells;
}

void Brig::remove(int n){
   
     cells->remove(n);
    
     
}

