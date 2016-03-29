/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <string>
using namespace std;
#include "Brig.h"

#define TEST_MODE

class UImanager {
  public:
    UImanager();
    void mainMenu(int*);
    void pirateMenu(int*);
    void getNumPirates(int*);
    void printBrig(Brig*);
    void showError(string);
    void pause();
};

#endif

