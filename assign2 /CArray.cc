/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      CArray.cc
 *   Purpose:   Assignment 2, Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Feb 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
using namespace std;

#include "CArray.h"

CArray::CArray() : size(0)
{ 
	elements= NULL;
}

CArray::CArray( CArray& cArray)
{	
	elements = new Cell*[size];
	for (int i=0;i<cArray.size;i++)
	{
		elements[i]= cArray.elements[i];		
	}
	size= cArray.size;
	
}

/*CArray& CArray:: operator = (const CArray &cSource)
{
	Cell** temp = new Cell*[cSource.getSize()];
	for (int i =0; i <cSource.getSize(); ++i)
	{
		temp[i] = cSource.get(i);
	}
	size = cSource.getSize();
	elements = temp;
}*/
CArray::~CArray() 
{
	
  	if(size!=0){
		
		for (int i=0; i<size; ++i){
			delete elements[i];
  		}
    		delete[] elements;
	}
	
	
}

int CArray::getSize() { return size; }

Cell* CArray::get(int index)
{
	
  if (index >= 0 && index < size) {
	
	
    return elements[index];
}

	
  return 0;
}

int CArray::add(Cell* cell)
{
	
  if (size == MAX_CELLS)
    return C_NOK;
	

 // elements[size] = cell;

 Cell** temp = new Cell*[size+1];
  
	for (int i=0; i<size; i++){
		temp[i]=elements[i];
		
	}
	temp[size]=cell;
  	size++;
	delete elements;
	elements = temp;
  return C_OK;
}

