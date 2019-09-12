//============================================================================
// Name        : Hello_world.cpp
// Author      : Sitaram R
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
	int res=0;
	if(a>res){
		res = a;
	}
	if(b>res){
			res = b;
		}
	if(c>res){
			res = c;
		}
	if(d>res){
			res = d;
		}
	return res;
}
