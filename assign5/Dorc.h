/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Dorc.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef DORC_H
#define DORC_H

#include <iostream>
#include "Pirate.h"

using namespace std;

class Dorc : public Pirate
{
	public :
		Dorc();
                virtual int getSpace();
                virtual string identify();
        
};
#endif
