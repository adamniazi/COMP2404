/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      UIManager.h
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
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
    void getPiratesId(int*);
    void printBrig(Brig*);
    void showError(string);
    void pause();
};

#endif

