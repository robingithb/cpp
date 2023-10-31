#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the value of n\n";
    cin>>n;
    for(i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
           if(j<=n-i){             
                    cout<<" ";
            }
           else{
            cout<<"*";
           }
        }
       cout<<"\n";
    }
}