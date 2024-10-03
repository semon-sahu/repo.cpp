#include <iostream>
using namespace std;
int main()
{
    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    // another patten
    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << r;
        }
        cout << "\n";
    }

    // another patten
    int n = 1;

    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << n << "\t";
            n++;
        }
        cout << "\n";
    }

    // another patten
    int s = 1;

    for (int r = 1; r <= 3; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << s << "\t";
            s++;
        }
        cout << "\n";
    }

    // another patten
    int k = 1;

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << s;
            k = 1 - k;
        }
        cout << "\n";
    }

    // small range
    int f = 122; // 65-90:A-Z
    // 97-122:a-z
    //colour  carector range 
    cout << char(122);
    for(int z=1;z<=255;z++){
        cout << z<<"="<<char(z) << " ";
    }


}