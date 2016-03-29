/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      PArray.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PARRAY_H
#define PARRAY_H

//#define C_OK   0
//#define C_NOK -1

#include "Pirate.h"
#include <iostream>
#include <string>
using namespace std;

#include "PArray.h"

template < class T> class PArray
{
  public:
    PArray();
    ~PArray();
    PArray& operator+=(T);
    int     getSize();
    T getWithId(int);
    T operator[](int);
    T get(int);
    PArray& operator-=(T);
    bool operator!();
    int getDeletedpirateSpace();
    int getStatus();
    string identify(int);
  private:
    int     size;
    T elements[MAX_PIRATES];
    int deletedPirateSpace;
    int status;
    int     add(T);
    int  remove(int n); 
};


template < class T >
PArray<T>::PArray() : size(0), deletedPirateSpace(0), status(0)
{ 
  for (int i=0; i<MAX_PIRATES; ++i)
    elements[i] = 0;
}

template < class T >
PArray<T>::~PArray() 
{
  for (int i=0; i<size; ++i) 
    delete elements[i];
}

template < class T >
int PArray<T>::add(T pirate)
{
  if (size == MAX_PIRATES)
   { 
    status = -1;
    return getStatus();
   }

  elements[size] = pirate;
  size++;
  
  return getStatus();
}

template < class T >
PArray<T>& PArray<T>::operator+=(T pirate)
{

  int status = add(pirate);
  return *this;	
}

template < class T >
T PArray<T>::getWithId(int id)
{
  for (int i=0; i<size; ++i) {
    if (elements[i] == 0)
      continue;
    if (elements[i]->getId() == id)
      return elements[i];
  }

  return(0);
}

template < class T >
T PArray<T>::operator[](int id)
{

  return get(id);  
}

template < class T >
T PArray<T>::get(int index)
{
  if (index >= 0 && index < size)
    return elements[index];

  return 0;
}

template < class T >
int PArray<T>::getSize() { return size; }

template < class T >
int PArray<T>::remove(int n)
{    if (size == 0){return 0;}
     for (int i=0;i<size;i++){
     	int id = elements[i]->getId();
         
        if (n == id){
            int num = elements[i]->getSpace();
            delete elements[i];
            
            for (int j =i ; j<size-1 ; j++) {
               elements[j]= elements[j+1];    
            } 
            size=size-1;         
            return num;
           
         }    
     }
     return 0;  
}

template < class T >
int PArray<T>::getDeletedpirateSpace()
{
  int temp = deletedPirateSpace;
  deletedPirateSpace =0;
  return temp;
}

template < class T >
int PArray<T>::getStatus()
{
  int temp = status;
  status = 0;
  return temp;
}


template < class T >
PArray<T>& PArray<T>::operator-=(T pirate)
{

  if (size != 0){
  for (int i=0;i<size;i++){
    if (pirate->getId() == elements[i]->getId()){
       deletedPirateSpace = pirate->getSpace();
       delete elements[i];
       for (int j =i ; j<size-1 ; j++) {
               elements[j]= elements[j+1];    
            } 
            size=size-1;  
     }
  }
  }
  return *this;
}
template < class T >
bool PArray<T>::operator!()
{
  if (size != 0){
     return true;
  }
  return false;
}

template < class T >
string PArray<T>::identify(int n)
{
   for (int i =0 ; i<size ; i++){
     return elements[i]->identify(); 
   }
}


#endif
