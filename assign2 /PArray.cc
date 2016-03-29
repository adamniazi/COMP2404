/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 2 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
using namespace std;

#include "PArray.h"

PArray::PArray() : size(0)
{ 

  elements = NULL;

}


PArray::~PArray() 
{ 

  for (int i=0; i<getSize(); ++i){ 
    delete elements[i];

  }
  delete [] elements;
}

int PArray::add(Pirate *pirate)
{
  if (size == MAX_PIRATES) {
	
    return C_NOK;
}

  //elements[size] = pirate;
  Pirate** temp = new Pirate*[size+1];
  
	for (int i=0; i<size; i++){
		temp[i]=elements[i];
	}
	temp[size]=pirate;
  	size++;
	delete[] elements;
	elements = temp;
	
  return C_OK;
}

Pirate* PArray::getWithId(int id)
{
  for (int i=0; i<size; ++i) {
    if (elements[i] == 0)
      continue;
    if (elements[i]->getId() == id)
      return elements[i];
  }

  return(0);
}

Pirate* PArray::get(int index)
{
  if (index >= 0 && index < size)
    return elements[index];

  return 0;
}

int PArray::getSize() { return size; }

