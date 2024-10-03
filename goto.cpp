#include <iostream>
using namespace std;
int main()
// {
//     cout << "good \n ";
//     goto t;
//     cout << "bad \n";
//     cout << "bad \n";
//     cout << "bad \n";
// t:
//     cout << "ok \n";
// }

// table print

{
    int a, i = 1;
    cout << "enter the number of table  ";
    cin >> a;
    t:
    cout << a * i << "\n";
    i++;
    if (i <= 10)
    {
        goto t;
    };
    cout << "done";
} 