/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      UIManager.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "UImanager.h"

using namespace std;

UImanager::UImanager() { }

void UImanager::mainMenu(int* choice)
{
  string str;

  *choice = -1;

#ifndef TEST_MODE
  system("clear");
#endif

  cout<< "\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
  cout << "( 1 )  Manage pirates" << endl;
  cout << "( 2 )  View brig" << endl;
  cout << "( 0 )  Exit" << endl;

  while (*choice < 0 || *choice > 2) {
    cout << "Enter your selection:  ";
    getline(cin, str);
    stringstream ss(str);
    ss >> *choice;
  }
}

void UImanager::pirateMenu(int* choice)
{
  string str;

  *choice = -1;

#ifndef TEST_MODE
  system("clear");
#endif

  cout<< "\n\n\n                   PIRATE MANAGEMENT MENU \n\n";
  cout << "( 1 )  Add pirate" << endl;
  cout << "( 2 )  Remove Pirate" << endl;
  cout << "( 0 )  Exit" << endl;

  while (*choice < 0 || *choice > 2) {
    cout << "Enter your selection:  ";
    getline(cin, str);
    stringstream ss(str);
    ss >> *choice;
  }
}

void UImanager::getNumPirates(int* numPirates)
{
  string    str;

  cout << endl << "Enter the number of pirates:   ";
  getline(cin, str);
  stringstream ss1(str);
  ss1 >> *numPirates;
}
void UImanager::getPiratesId(int* numPirates)
{
  string    str;

  cout << endl << "Enter the id of the pirate:   ";
  getline(cin, str);
  stringstream ss2(str);
  ss2 >> *numPirates;
}

void UImanager::printBrig(Brig* brig)
{
  CArray& cells = brig->getCells();

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"Brig: #cells=" << cells.getSize() <<endl;

  for (int i=0; i<cells.getSize(); ++i) {

    cout << "--Cell "<<i<<": space remaining="<<cells[i]->getSpace()<<endl;

    PArray& pa = cells[i]->getPirates();
    for (int j=0; j<pa.getSize(); ++j) {

      if (pa[j] == 0) 
      continue;
      cout <<"----Pirate id: "<< pa[j]->getId() 
           << "  space: " << pa[j]->getSpace() << endl;
    }
  }
}

void UImanager::showError(string err)
{
  cout << err << " -- press enter to continue...";
  cin.get();
}

void UImanager::pause()
{
  string str;

  cout << endl << "\nPress enter to continue...";
  getline(cin, str);
}

