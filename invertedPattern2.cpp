#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}