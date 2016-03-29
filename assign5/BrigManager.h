/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      BrigManager.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
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
    void addBorcs(int);
    void addDorcs(int);
    void addPorcs(int);
    void removePirates(int);
  private:
    UImanager *view;
    Brig      *brig;
};

#endif

