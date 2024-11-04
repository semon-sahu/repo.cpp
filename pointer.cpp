#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"enter size of row \n";
cin>>r;
cout<<"enter size of column\n ";
cin>>c;
int **arr=new int*[r];
for(int i=0;i<r;i++){
   arr[i]=new int[c];
}
cout<<"enter value";
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
cout<<"\noutput\n";
cout<<"ennter value\n";
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
    }
}

}

//is ka code bacha hua hai 15/10/2024ka 