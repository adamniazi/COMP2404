/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PARRAY_H
#define PARRAY_H

#include "Pirate.h"

class PArray
{
  public:
    PArray();
    ~PArray();
    int     add(Pirate*);
    int     getSize();
    Pirate* getWithId(int);
    Pirate* get(int);
  private:
    int     size;
    Pirate** elements;
};

#endif
