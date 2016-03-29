/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Porc.cc
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include "Porc.h"

Porc::Porc() : Pirate(random(2) + 2){}

int Porc::getSpace() { return space; }
string Porc::identify() {return "I AM A PORC";}
