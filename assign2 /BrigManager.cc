/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include "BrigManager.h"

using namespace std;

BrigManager::BrigManager()
{
  view = new UImanager;
  brig = new Brig;
}

BrigManager::~BrigManager()
{
  delete view;
  delete brig;
}

void BrigManager::launch()
{
  int    choice1 = -1;
  int    choice2 = -1;
  int    id      = -1;
  int    rc;

  while (choice1 != 0) {
    view->mainMenu(&choice1);
    if (choice1 == 0) {
      break;
    }
    else if (choice1 == 1) {
      choice2 = -1;
      while (choice2 != 0) {
        view->pirateMenu(&choice2);
        if (choice2 == 0) {
          break;
        }
        else if (choice2 == 1) {
          int num;
          view->getNumPirates(&num);
          addPirates(num);
        }
      }
    }
    else if (choice1 == 2) {
      view->printBrig(brig);
    }
    if (choice2 != 0)
      view->pause();
  }
}

void BrigManager::addPirates(int numPirates)
{
  Pirate*   newPirate;

  while (numPirates > 0) {

    newPirate = new Pirate;

    brig->addPirate(newPirate);

    --numPirates;
  }


}

