/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 3 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Mar 10 2015
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
    CArray(const CArray&);
    ~CArray();
    int   getSize();
    Cell* get(int);
    int   add(Cell*);
    void remove(int);
    CArray& operator = (const CArray &Source); 
  private:
    int    size;
    Cell**  elements;
};

#endif
