#include <iostream>
using namespace std;
int main()
{
    //     *
    //    **
    //   ***
    //  ****
    // *****
    // for (int r = 1; r <= 5; r++)
    // {
    //     for (int s = 5; s > r; s--)
    //     {
    //         cout << " ";
    //     }
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // for (int r = 1; r <= 3; r++)
    // {
    //     for (int s = 1; s < r; s++)
    //     {
    //         cout << " ";
    //     }
    //     for (int c = 3; c >= r; c--)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }


//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
    // for (int r = 1; r <= 5; r++)
    // {
    //     for (int s = 5; s > r; s--)
    //     {
    //         cout << " ";
    //     }
    //     for (int c = 1; c <= r; c++)
    //     {
    //         cout << "*"<<" ";
    //     }
    //     cout << "\n";
    // }
    // for(int r=1;r<=4; r++)
    // {
    //     for(int s=1;s<=r;s++){
    //         cout<<" ";
    //     }
    //     for(int c=4;c>=r;c--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<"\n";
    // }

 

    for (int r = 4; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c<< "\t";
        
        }
        cout << "\n";
    }
}
