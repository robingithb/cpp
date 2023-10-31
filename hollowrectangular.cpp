#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"enter the rows and columns\n";
    cin>>r>>c;
    for(i = 0;i<r;i++){
        for( j = 0;j<c;j++){
            if( i==0 || i==r-1){
                cout<<"*\t";
            }
            else if (j==0 || j==c-1){
                cout<<"*\t";
            }
            else{
                cout<<" \t";
            }
        }
        cout<<"\n";
    }
}