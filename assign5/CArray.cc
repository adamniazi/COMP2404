/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      CArray.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include <string>
using namespace std;

#include "CArray.h"

CArray::CArray() : size(0), status(0)
{ 
  for (int i=0; i<MAX_CELLS; ++i)
    elements[i] = 0;
}

CArray::~CArray() 
{
  for (int i=0; i<size; ++i)
    delete elements[i];
}

int CArray::getStatus()
{
  int temp = status;
  status = 0;
  return temp;
}

int CArray::getSize() { return size; }

Cell* CArray::get(int index)
{
  if (index >= 0 && index < size)
    return elements[index];

  return 0;
}

Cell* CArray::operator[](int n)
{


  return get(n);

}

int CArray::add(Cell* cell)
{
  if (size == MAX_CELLS)
   {
    status = -1;
    return getStatus();
   }
  elements[size] = cell;
  size++;
  
  return getStatus();
}

CArray& CArray::operator+=(Cell* cell)
{

 
  add(cell);
  return *this;
}

void CArray::remove(int n)
{
 for (int i=0;i<size;i++)
 {
    
     elements[i]->remove(n);
 }     

}
