#include <iostream>
using namespace std;
int main()
// {
//     int i;
//     for (i ; i <= 10; i++)
//     {
//         cout << i << "\t";
//     }
// }

//perfect number for //for loop

{
    int n,s=0;
    cout<<"Enter any number\n";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s=s+i;

        }

    }
    if(s==n){
        cout<<"The number is a perfect number";
    }
    else{
        cout<<"The number is not a perfect number";
    }
    }