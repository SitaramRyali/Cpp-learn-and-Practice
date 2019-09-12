//============================================================================
// Name        : Hello_world.cpp
// Author      : Sitaram R
// Version     :
// Copyright   : Your copyright notice
// Description : Vector Example program in C++
//============================================================================


#include <iostream>
using namespace std;
#include <stdio.h>
#include <iomanip>


int main () {

   int n[ 10 ]; // n is an array of 10 integers

   // initialize elements of array n to 0
   for ( int i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
   cout << "Element" << "Value" << endl;

   // output each array element's value
   for ( int j = 0; j < 10; j++ ) {
      cout << n[j]<< endl;
   }
   printf( "%s\n", n );

   return 0;
}
