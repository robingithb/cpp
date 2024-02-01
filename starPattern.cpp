#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    for(i=1;i<=(n);i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=n-i;j<n;j++){
            cout<<"*"<<" ";
        }
           cout<<endl;
    }
    
    for(i=n;i>=1;i--){
        
        for(j=i;j<=n;j++){
            cout<<" ";
        }
        for(j=1;j<i;j++){
                cout<<"*"<<" ";
        }
           cout<<endl;
        }
    }
     
