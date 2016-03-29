/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      BrigManager.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
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
    if (choice2 != 0)
      view->pause();
  }
}

void BrigManager::addPirates(int numPirates)
{
  Pirate*   newPirate;

  while (numPirates > 0) {

    int r = random(3);

    
		
	if(r==0){

		newPirate = new Dorc;	
		}
	else if(r==1){

		newPirate = new Porc;
		}
	else if(r==2){

		newPirate = new Borc;
		}
	

          *brig+=(newPirate);

    	--numPirates;
  }


}
void BrigManager::removePirates(int numPirates){

     brig->remove(numPirates);
     
}

