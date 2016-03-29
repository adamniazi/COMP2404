/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      random.cc
 *   Purpose:   Assignment 4 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abul Bin Asif Niazi
 *   Date:      Mar 24 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include <iostream>
#include <cstdlib>

int random(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}
