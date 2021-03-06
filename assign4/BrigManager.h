/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      BrigManager.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef BRIG_MANAGER_H
#define BRIG_MANAGER_H

#include "defs.h"
#include "UImanager.h"
#include "Brig.h"

class UImanager;

class BrigManager 
{
  public:
    BrigManager();
    ~BrigManager();
    void launch();
    void addPirates(int);
    void removePirates(int);
  private:
    UImanager *view;
    Brig      *brig;
};

#endif

