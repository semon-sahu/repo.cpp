// #include <iostream>
// using namespace std;
// // void multi(int a = 9, int b)
// // {
// //     cout << "result=" << a * b;
// // }
// void sum(int a = 9, int b = 0, int c = 9)
// {
//     cout << "result=" << a + b + c << "\n";
// }

// int main()
// {
//     sum(3);
//     sum(3, 5);
//     sum();
//     sum(2, 4);
// }

// wap to print square of any number using function

// #include<iostream>
// using namespace std;
// void square(int a){
//     cout<<"result="<<a*a<<"\n";
// }
// int main(){
//     int a;
//     cout<<"enter any number\n";
//     cin>>a;
//     square(a);
// }

// wap to find a facorial
#include <iostream>
using namespace std;
int f = 1;
void fact(int a)
{
    for (int a; a > 0; a--)
    {
        f = f * a;
    }
}
void display()
{
    cout << "factorial=" << f;
}
int main()
{
    int a;
    cout << "enter any number\n";
    cin >> a;
    fact(a);
    display();
}

// wap to find out the gretest number btw two using function
// wap for swaping using function
// wap to find out the square root of any number with the help of function