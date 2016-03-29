/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      BrigManager.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include "BrigManager.h"
#include "Dorc.h"
#include "Borc.h"
#include "Porc.h"
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
  int    choice3 = -1;
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
          choice3 =-1;
          while (choice3 != 0) {
            view->pTypeMenu(&choice3);
            if (choice3 == 0) {
              break;
            }
            else if (choice3 == 1) {
              int bnum;
              view->getNumPirates(&bnum);
              addBorcs(bnum);
            }
            else if (choice3 == 2) {
              int dnum;
              view->getNumPirates(&dnum);
              addDorcs(dnum);
            }
            else if (choice3 == 3) {
              int pnum;
              view->getNumPirates(&pnum);
              addPorcs(pnum);
            }
            
          }

        }
        else if(choice2 == 2){
        
             int n;
             view->getPiratesId(&n);
             removePirates(n);          
        }
      }
    }
    else if (choice1 == 2) {
      view->printBrig(brig);
    }
    else if (choice1 == 3){
    int number;
    view->getPiratesId(&number);
    view->pirateId(brig->identify(number));
    }
    if (choice2 != 0)
      view->pause();
  }
}

void BrigManager::addBorcs(int num){
  Pirate*   newPirate;

  while (num > 0) {
    newPirate = new Borc;
    *brig+=(newPirate);
    --num;
  }
}
void BrigManager::addDorcs(int num){
  Pirate*   newPirate;

  while (num > 0) {
    newPirate = new Dorc;
    *brig+=(newPirate);
    --num;
  }
}
void BrigManager::addPorcs(int num){
  Pirate*   newPirate;

  while (num > 0) {
    newPirate = new Porc;
    *brig+=(newPirate);
    --num;
  }
}
void BrigManager::removePirates(int numPirates){

     brig->remove(numPirates);
     
}

