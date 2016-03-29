/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Dorc.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include "Dorc.h"

Dorc::Dorc() : Pirate(random(2) + 4) {}

int Dorc::getSpace() { return space; }
string Dorc::identify() {return "I AM A DORC";}
