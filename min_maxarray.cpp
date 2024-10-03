#include<iostream>
using namespace std;
int main(){
    //wap to find Min value in any array 
    int cyb[]={34,54,776,78,87};
    int chotu=cyb[0];
for(int i=1;i<=4;i++){
    if (chotu > cyb[i])
    {
        chotu=cyb[i];
    }
}
cout<<"min value"<<chotu;
}