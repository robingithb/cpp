#include<bits/stdc++.h>
using namespace std;
int y=0;
int p=0;
int add(int n){
  
    if(n>=3){
         y=y+ (n/3); 
         n=n/3;
        int  v=n%3;
         p+=v;
         add(n);
    }
    else{
        p = p+n;
    }
     
     if(p>=3){
        int d = p;
        add(d);
        p=p-3;
    }
    
   
    return y;
    
}
int main(){
    int n,total=0;
    cout<<"enter the amount"<<endl;
    cin>>n;
    int x =n;
    total = add(n);
    cout<<total+x<<endl;
}