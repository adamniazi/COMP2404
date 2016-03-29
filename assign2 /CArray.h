/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CARRAY_H
#define CARRAY_H

#include "Cell.h"
#include "Pirate.h"

class CArray
{
  public:
    CArray();
    CArray( CArray&);
    ~CArray();
    int   getSize();
    Cell* get(int);
    int   add(Cell*);
    CArray& operator = (const CArray &Source); 
  private:
    int    size;
    Cell**  elements;
};

#endif
