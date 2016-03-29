/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Borc.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include "Borc.h"

Borc::Borc() : Pirate(random(3) + 5) {}

int Borc::getSpace() { return space; }
string Borc::identify() {return "I AM A BORC";}
