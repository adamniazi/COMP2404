/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
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

