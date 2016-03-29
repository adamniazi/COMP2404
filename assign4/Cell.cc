/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Cell.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Cell.h"

int Cell::nextId = 1;

Cell::Cell(int size)
      : spaceRemaining(size)
{
  
  cellNumber = nextId++;
 
}

PArray& Cell::getPirates() { return pirates; }
int     Cell::getSpace()   { return spaceRemaining; }


bool Cell::fits(Pirate* pirate)
{

  if ((spaceRemaining - pirate->getSpace()) < 0)
    return false;

  return true;
}

void Cell::reduceSpace(int pSpace)   { spaceRemaining -= pSpace; }

Cell& Cell::operator+=(int p )
{ 
  increaseSpace(p); 
  return *this;
}

void Cell::increaseSpace(int pSpace) { spaceRemaining += pSpace; }

Cell& Cell::operator-=(int p)
{ 
  reduceSpace(p); 
  return *this;
}


Cell& Cell::operator+=(Pirate* pirate)
{

  pirates+=(pirate);
  return *this;     
}

void Cell::remove(int n)
{

  Pirate* p = pirates.getWithId(n);
  if (p != NULL) { pirates-=(p); }
  
     
  *this+=(pirates.getDeletedpirateSpace());
}
     
     
     
     
     

