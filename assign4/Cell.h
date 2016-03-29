/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Cell.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
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
    PArray& getPirates();
    int     getSpace();
    //void    reduceSpace(int);
    //void    increaseSpace(int);
    Cell&    operator+=(int);
    Cell&    operator-=(int);
    Cell&    operator+=(Pirate*);
    void     remove(int n);
  private:
    static int  nextId;
    int         cellNumber;
    int         spaceRemaining;
    PArray      pirates;
    void    reduceSpace(int);
    void    increaseSpace(int); 
};

#endif

