#include<iostream>
using namespace std;
int mian(){
    // patten reverce holo triangel

    int r = 0;
    for (r = 1; r >= 5; r++)
    {

        for (int c = 1; c <= r; c--)
        {

            cout << "*";
        }
        cout << endl;
    }   
}