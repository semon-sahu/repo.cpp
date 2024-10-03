#include <iostream>
using namespace std;
int main()
{

    // for (int i = 65; i <= 67; i++)
    // {
    //     for (int j = 65; j <= i; j++)
    //     {
    //         cout << char(j);
    //     }
    //     cout << "\n";
    // }

    //abcd
    // int n=65;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(n)<<"\t";
    //         n++;
    //     }
    //     cout << "\n";
    // }


    //mirror image patten ulta triangle

    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << "\t";
        
        }
        cout << "\n";
    }
}