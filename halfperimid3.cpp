#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"\t";
        }
       cout<<"\n";
    }
}