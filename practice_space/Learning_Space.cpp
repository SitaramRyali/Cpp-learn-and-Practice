//============================================================================
// Name        : Learning_Space.cpp
// Author      : ryalis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
#include<cmath>
using std::cout;
using std::endl;
using std::pow;


int main()
{
    //Dimension of the cube
    float cubeSide = 5.42;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;
    volCube = pow(cubeSide,3);
    volSphere = (4.0/3.0)* 3.142 *pow(sphereRadius,3);
    volCone = 3.142 * (pow(coneRadius,2)) * (coneHeight/3);
    cout<<"Cube Volume is:"<<volCube<<endl;
    cout<<"Sphere Volume is:"<<volSphere<<endl;
    cout<<"Cube Volume is:"<<volCone<<endl;
    return 0;
}
