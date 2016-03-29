/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "Pirate.h"

int Pirate::nextId = 1001;

Pirate::Pirate(int s) 
{
 
  id = nextId++;
  space = s;
  
}

int Pirate::getId()    { return id; }
int Pirate::getSpace() { return space; }

