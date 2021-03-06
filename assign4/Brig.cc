/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "Brig.h"

Brig::Brig() : status(0)
{ }

int Brig::addPirate(Pirate* pirate)
{
  Cell* newCell;
  int index = -1;
  int rc;

  for (int i=0; i<cells.getSize(); ++i) 
  //  if (cells.get(i)->fits(pirate) ) {index = i;}
      if (cells[i]->fits(pirate) ) {index = i;}



  if (index >= 0) {

   
    cells[index]->getPirates()+=(pirate);
    rc = cells[index]->getPirates().getStatus();
    if (rc != C_OK)
      return C_NOK;


    *cells[index] -= (pirate->getSpace());
  }
  else {
    newCell = new Cell;
    cells+=(newCell);
    newCell->getPirates()+=(pirate);
    rc = newCell->getPirates().getStatus();

    if (rc != C_OK){
      return C_NOK;
    }
   *newCell-=(pirate->getSpace());

  }
  return C_OK;
}

int Brig::getStatus()
{
  int temp = status;
  status = 0;
  return temp;
}

CArray& Brig::getCells() { return cells; }

Brig& Brig::operator+=(Pirate* pirate)
{


  addPirate(pirate);
  return *this;
}
void Brig::remove(int n)
{

  cells.remove(n);
  
}

