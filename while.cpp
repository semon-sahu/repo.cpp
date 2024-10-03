#include <iostream>
using namespace std;
int main()
// {
//     int i=1;
//     while(i<=10){//entry loop
//         cout<<i<<"\t";
//         i++;

//     }
//     cout<<"done";
// }

// table

// {
//     int i=1;
//     int n;
//     cout<<"enter the number to generate any  table";
//     cin>>n;
//     while(i<=10){//entry loop
//     cout<<n*i<<"\t";
//     i++;
//     }

// }

// H.W

// Q1.wap to generate the factorial any number!!
// Q2.wap to generate power!!
// Q3.wap to generate the square root of any valid number!!
// Q4.wap to find out the entered number prime or not yes and no?
// Q5.wap to find out the entered number is perfect number or not?

// wap to find out how many digit exist in a given number
//  {
//      int n, c=0;
//      cout<<"enter the number to find out the digit exist in it!!";
//      cin>>n;
//      while(n!=0){//entry loop
//      c++;
//      n=n/10;
//      }
//      cout<<c;
//  }

// wap to find out how many digit sum in a given number

// {
//     int n, c = 0;
//     cout << "enter the number to find out the digit sum in it!!";
//     cin >> n;
//     while (n > 0)
//     { // entry loop
//         c = c + n % 10;
//         n = n / 10;
//     }
//     cout << c;
// }

// Q1.wap to generate the factorial any number for while loop!!
// {
//     int n, i = 1, f = 1;
//     cout << "enter the number to find out the factorial!!";
//     cin >> n;
//     while (i <= n){
//         f = f * i;
//         cout << i<<"*" "\t";
//         i++;
//     }
//     cout << f;

// }

// Q2.wap to generate power for while loop!!

// {
//     int p,b,c,i=1;
//     cout<<"enter the base \n";
//     cin>>b;
//     cout<<"enter the power \n";
//     cin>>p;
//     c=b;
//     while(i<p)
//     {
//         c=c*b;
//         i++;

//     }
//     cout<<"power="<<c;

//     }

// }

// Q3.wap to generate the square root of any valid number!!
// {
//     int n, i = 1;
//     cout << "enter any valid no generate sqr root  \n";
//     cin >> n;
//     while (i <= n)
//     {
//         if (i * i == n)
//         {
//             cout << i;
//             break;
//         }
//         i++;
//     }
// }

// Q4.wap to find out the entered number prime or not yes and no?

// {
//     int n, i = 2, c = 0;
//     cout << "enter the number to find out the prime!!";
//     cin >> n;
//     while (i <= n) {
//         if (n % i == 0) {
//             c++;
//             break;
//             }
//             i++;
//             }
//             if (c == 0) {
//                 cout << "yes!!" << endl;
//             }
//             else {
//                 cout << "no!!" << endl;
//                 }

// }

// Q5.wap to find out the entered number is perfect number or not?
{
    int n, i = 1, f = 0;
    while (i <= 10)
    {
        if (i % 17 == 0)
        {
            f = 100;
            break;
        }
        i++;
    }
    if (f == 100)
    {
        cout << "found!!";
    }
    else
    {
        cout << "not found!!";
    }
}
