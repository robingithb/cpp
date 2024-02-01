#include<iostream>
using namespace std;
int main()
{
    int a[5],n=5,i,c=0;
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    for(i=n-1;i<=0;i--){
        if(a[i]<a[i-1]){
            
            a[i-1]=a[i]+a[i-1];
        }
    }
    for(i=0;i<sizeof(a);i++){
         c++;
    }
    cout<<"result\t"<<c;
    return 0 ;
}