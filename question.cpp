#include <iostream>
using namespace std;
int main()
// {
// ek bar phone se recheckkar le na
//     // wap to find a unique number
//     int arr[5], j;
//     cout << "enter 5 recirds\n";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "\n result of uique value \n";
//     for (int i = 0; i < 5; i++)
//     {

//         for (int i = 0; i < 5; i++)
//         {
//             for (j = 0; j < i; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     break;
//                 }
//             }
//             if (i == j)
//             {
//                 cout << arr[j] << "\t";
//             }
//         }
//     }
// }

// {
//     // array prime number
//     int arr[5], j;
//     cout << "enter 5 records\n";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     int f;
//     cout << "\n result of prime value\n";
//     for (int i = 0; i < 5; i++)
//     {
//         f = 0;
//         int k = arr[i] - i;
//         while (k > 1)
//         {
//             if (arr[i] % k == 0)
//             {
//                 f = 1;
//                 break;
//             }
//             k--;
//         }
//         if (f == 0)
//         {
//             cout << arr[i] << "\t";
//         }
//     }
// }

// {
//     //missing number
//     int arr[]={1,2,3,5,6};
//     int s;
//     s = sizeof(arr) / sizeof(arr[0]);
//     for(int i=0;i<s;i++){
//         if(arr[i+1]-arr[i]>1){
//             cout<<"missing number="<<arr[i]+1;
//             break;
//         }
//     }
// }

// {
//     // find square root
//     int arr[] = {2, 81, 64, 8, 121};
//     int s;
//     s = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < s; i++)
//     {
//         int n = arr[i];
//         for (int j = 1; i < n / 2; j++)
//         {
//             if (j * j == n)
//             {
//                 cout << n << "\t";
//             }
//         }
//     }
// }

// {
//     // find zero in last range in  a series
//     int arr[] = {2, 0, 64, 0, 121};
//     int s;
//     s = sizeof(arr) / sizeof(arr[0]);
//     int tmp[s], c = 0;
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     for (int i = 0; i < s; i++)
//     {
//         if (arr[i] != 0)
//         {
//             tmp[c] = arr[i];
//             c++;
//         }
//     }
//     while (c < s)
//     {
//         tmp[c] = 0;
//         c++;
//     }
//     cout << "\nresult\n";
//     for (int i = 0; i < s; i++)
//     {
//         cout << tmp[i] << "\t";
//     }
// }

{
    //assending order array form

    int arr[]={1,4,3,6,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\n";

    }
    int tmp;
    cout<<"\t sorted array  is\n";
    for(int i=0;i<s;i++){
        for(int j=i;j<s-1;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }

        }


    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}