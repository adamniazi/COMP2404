/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Cell.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"
#include "PArray.h"

class Cell 
{
  public:
    Cell(int=MAX_CELL_SPACE);
    bool    fits(Pirate*);
    PArray<Pirate*>& getPirates();
    int     getSpace();
    Cell&    operator+=(int);
    Cell&    operator-=(int);
    Cell&    operator+=(Pirate*);
    void     remove(int n); //changed return type to int
    string   identify(int);
  private:
    static int  nextId;
    int         cellNumber;
    int         spaceRemaining;
    PArray<Pirate*>      pirates;
    void    reduceSpace(int);
    void    increaseSpace(int); 
};

#endif

