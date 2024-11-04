// #include <iostream>
// using namespace std;
// void swp(int &a, int &b) // call by reference
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout << "value of a=" << a << "\n";
//     cout << "value of b=" << b << "\n";
// }
// int main()
// {
//     int x, y;
//     cout << "enter 2 no\n";
//     cin >> x >> y;
//     swp(x, y);
//     cout << "value of x=" << x << "\n";
//     cout << "value of y=" << y << "\n";
// }

// passsing array as a paremeter in a function
#include <iostream>
using namespace std;
void arr(int *a, int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int x[] = {2, 1, 3, 4, 5};
    int s = sizeof(x) / sizeof(x[0]);
    arr(x, s);
}