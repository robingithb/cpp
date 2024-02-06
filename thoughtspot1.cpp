#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> newstack;  
    int a[5],n=5,i,c=0;
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    for(i=n-1;i<0;i--){
        if(a[i]<a[i-1]){
            
            a[i-1]=a[i]+a[i-1];
            newstack.push(a[i-1])
        }
        int p1= newstack.pop();
        int p2 = newstack.pop();
        if(p1>p2){
            newstack.push(p1+p2);
        }
            }
   /*for(i=0;i<sizeof(a);i++){
         c++;
    }*/
    int p3 = newstack.size();
    cout<<"result\t"<<p3;
    return 0 ;
}