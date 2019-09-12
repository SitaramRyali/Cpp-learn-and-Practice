//============================================================================
// Name        : Hello_world.cpp
// Author      : ryalis
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;
int addition(int a, int b);

int main() {

    int x, y;
    x = 5;
    y = 7;
    clock_t start;
    double duration;
    start = clock();
    cout<<start<< "\n";
    cout << addition(x, y) << "\n";
    duration = ( clock() - start );
    cout<<duration<< "\n";
    cout << "duration milliseconds initialize beliefs " << 1000 * duration << '\n';

    return 0;

}

int addition(int a, int b) {

	for (int i = 0; i < 1000; i++) {
	        if (i >= 5 && i < 990) {
	            cout <<  "normal \n";
	        }
	        else if (i >= 990) {
	            cout << "high \n";
	        }
	        else {
	            cout << "low \n";
	        }
	    }
	return 10;
}
