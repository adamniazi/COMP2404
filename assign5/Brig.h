/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef BRIG_H
#define BRIG_H



#include <iostream>
#include <string>
#include <list>

using namespace std;

#include "defs.h"
#include "Pirate.h"
#include "CArray.h"

class Brig 
{
  public:
    Brig();
    ~Brig();
    list<Cell*> getCells();
    void remove(int);
    Brig& operator+=(Pirate*);
    int getStatus();
    string identify(int);
  private:
    CArray cells;
    int status;
    int addPirate(Pirate*);
    list<Cell*> cellList;
    list<Cell*>::iterator itr;
};

#endif

