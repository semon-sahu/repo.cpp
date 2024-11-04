// // Two  dimention array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][3];
//     cout << "enter 6 value";
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cin >> arr[r][c];
//         }
//     }
//     cout << "\n store data in 2d\n";
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << arr[r][c] << " \t";
//         }
//         cout << "\n";
//     }
// }

// // wap to  display only even number in a  2 dimention array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];

//     cout << "enter 9 value";
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cin >> arr[r][c];
//         }
//     }
//     cout << "store data in 2d\n";
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             if (arr[r][c] % 2 == 0)
//             {
//                 cout << arr[r][c] << "\t";
//             }
//         }
//         cout << "\n";
//     }
// }
// wap to sum of the vaues of 2 dimention aary
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int sum = 0;
    cout << "enter 9 value";
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout << "store data in 2d\n";
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (arr[r][c] % 2 == 0)
            {
                sum = sum + arr[r][c];
            }
        }
        cout << "\n";
    }
}