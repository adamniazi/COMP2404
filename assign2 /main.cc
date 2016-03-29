/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Adam Niazi
 *   Date:      Feb 24 2015
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

