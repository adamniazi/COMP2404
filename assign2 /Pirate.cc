/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "Pirate.h"
#include <iostream>
using namespace std;

int Pirate::nextId = 1001;

Pirate::Pirate() 
{
  id = nextId++;
  space = random(4) + 2;
}

int Pirate::getId()    { return id; }
int Pirate::getSpace() { return space; }

