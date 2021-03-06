/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef BRIG_H
#define BRIG_H



#include <iostream>
#include <string>

using namespace std;

#include "defs.h"
#include "Pirate.h"
#include "CArray.h"

class Brig 
{
  public:
    Brig();
    //int addPirate(Pirate*);
    CArray& getCells();
    void remove(int);
    Brig& operator+=(Pirate*);
    int getStatus();
  private:
    CArray cells;
    int status;
    int addPirate(Pirate*);
};

#endif

