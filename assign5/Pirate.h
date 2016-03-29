/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"

class Pirate 
{
  public:
    Pirate(int);
    int getId();
    virtual int getSpace()=0;
    virtual string identify()=0;
  protected:
    static int  nextId;
    int         id;
    int         space;
};

#endif

