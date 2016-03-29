/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Porc.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef PORC_H
#define PORC_H

#include <iostream>
#include "Pirate.h"

using namespace std;

class Porc : public Pirate
{
	public :
		Porc();
                virtual int getSpace();
                virtual string identify();
};
#endif
