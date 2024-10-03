#include <iostream>
using namespace std;
int main()
{
    int prev = 0, cur = 1;
    int n, term = 0;
    cout << "enter term of fibonacci serires \n";
    cin >> n;
    cout << prev << "\t" << cur << "\t";
    for (int i = 1; i <= n; i++)
    {
        term = prev + cur;
        prev = cur;
        cout << term;
    }
    cout << term << " ";
};
