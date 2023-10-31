#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*\t";
        }
       cout<<"\n";
    }
}