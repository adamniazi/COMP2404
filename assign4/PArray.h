/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      PArray.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PARRAY_H
#define PARRAY_H

//#define C_OK   0
//#define C_NOK -1

#include "Pirate.h"

class PArray
{
  public:
    PArray();
    ~PArray();
    //int     add(Pirate*);
    PArray& operator+=(Pirate*);
    int     getSize();
    Pirate* getWithId(int);
    Pirate* operator[](int);
    Pirate* get(int);
    //int  remove(int n); 
    PArray& operator-=(Pirate*);
    bool operator!();
    int getDeletedpirateSpace();
    int getStatus();
  private:
    int     size;
    Pirate* elements[MAX_PIRATES];
    int deletedPirateSpace;
    int status;
    int     add(Pirate*);
    int  remove(int n); 
};

#endif
