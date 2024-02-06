#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the rows and columns";
    cin>>r>>c;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0 ;
    
}