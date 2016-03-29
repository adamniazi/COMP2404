/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      CArray.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CARRAY_H
#define CARRAY_H

//#define C_OK   0
//#define C_NOK -1

#include "Cell.h"
#include "Pirate.h"

class CArray
{
  public:
    CArray();
    ~CArray();
    int   getSize();
    Cell* get(int);
    Cell* operator[](int);
    //int   add(Cell*);
    CArray& operator+=(Cell*);
    void remove(int n);
    int getStatus();
  private:
    int    size;
    Cell*  elements[MAX_CELLS];
    int status;
    int   add(Cell*);
};

#endif
