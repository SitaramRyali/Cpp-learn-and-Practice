//============================================================================
// Name        : Hello_world.cpp
// Author      : Sitaram R
// Version     :
// Copyright   : Your copyright notice
// Description : Vector Example program in C++
//============================================================================


#include <cmath>
#include <cstdio>
//#include <vector>
#include <iostream>

using namespace std;



int main(){

    int num_in=0;
    int num_q=0;
    int temp;
    int ar1_len,ar2_len;
    int ar_ind,q_ind;
    int print_val_1,print_val_2;


    cin>>num_in>>num_q;


    cin>>ar1_len;
    int *ar1 = new int[ar1_len];
    for(int i=0; i<ar1_len;i++)
    {
        cin>>temp;
        ar1[i]=temp;
    }

    cin>>ar2_len;
    int *ar2 = new int[ar2_len];
    for(int i=0; i<ar2_len;i++)
    {
        cin>>temp;
        ar2[i]=temp;
    }

    for(int i=0; i<num_q;i++)
    {
        cin>>ar_ind>>q_ind;
        if(ar_ind==0)
        {
            print_val_1=ar1[q_ind];
        }
        else{
            print_val_2= ar2[q_ind];
        }


    }
    cout<<print_val_1<<endl;
    cout<<print_val_2<<endl;

return 0;
}
