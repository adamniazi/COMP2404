/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

#ifndef STORAGE_H
#define STORAGE_H

#include "CArray.h"

using namespace std;

typedef enum UpdateType {ADD} UpdateType;

class Storage
{
public:
	Storage();
	~Storage();
	void retrieve(CArray**);
	void update (UpdateType, CArray*);

private:
	CArray *cellArray;



};
#endif













