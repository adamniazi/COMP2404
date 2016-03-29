/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      main.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

#include "BrigManager.h"


int main()
{
  BrigManager manager;

  srand((unsigned)time(0));

  manager.launch();

}
