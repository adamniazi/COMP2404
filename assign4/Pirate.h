/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
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
    int getSpace();
  protected:
    static int  nextId;
    int         id;
    int         space;
};

#endif

