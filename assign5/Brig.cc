/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "Brig.h"

Brig::Brig() : status(0)
{ }

Brig::~Brig(){
    for (itr = cellList.begin(); itr != cellList.end(); ++itr){
    delete (*itr);
  }
}

int Brig::addPirate(Pirate* pirate)
{
    Cell* newCell;
  bool found = false;
  int rc;

  if(cellList.empty()){
      newCell = new Cell();
      cellList.push_back(newCell);
  }

  int i = 0;

  for (itr=cellList.begin(); itr != cellList.end(); ++itr) {
      if ((*itr)->fits(pirate) ) {
        found = true;
        break;
      }
      ++i;
  }


  if (found) {
    (*itr)->getPirates()+=(pirate);
    rc = (*itr)->getPirates().getStatus();
    if (rc != C_OK)
      return C_NOK;


    **itr -= (pirate->getSpace());
  }
  else {
    newCell = new Cell();
    cellList.push_back(newCell);
    newCell->getPirates()+=(pirate);
    rc = newCell->getPirates().getStatus();

    if (rc != C_OK){
      return C_NOK;
    }
   (*newCell)-=(pirate->getSpace());

  }
  return C_OK;
}

int Brig::getStatus()
{
  int temp = status;
  status = 0;
  return temp;
}

list<Cell*> Brig::getCells() { return cellList; }

Brig& Brig::operator+=(Pirate* pirate)
{


  addPirate(pirate);
  return *this;
}

void Brig::remove(int n)
{

  for (itr=cellList.begin(); itr != cellList.end(); ++itr) {
    (*itr)->remove(n);
      }
}

string Brig::identify(int n)
{

for (itr=cellList.begin(); itr != cellList.end(); ++itr) {
   if ((*itr)->getPirates().getWithId(n) != 0){    
	{ return (*itr)->identify(n);
        }
      }
}

}

