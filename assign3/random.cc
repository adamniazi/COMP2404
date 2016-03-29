/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Assignment 3 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      Mar 10 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include <cstdlib>

int random(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}
