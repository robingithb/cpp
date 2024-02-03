#include<iostream>
using namespace std;
int main(){
    int n,sum=0,n1;
    cout<<"enter the number"<< endl;
    cin>>n;
    n1=n;
    while(n>0){
        int number = n%10;
         sum = sum + (number*number*number);
         n = n/10;
    }  
    if(sum == n1){
        cout<<"armstrong number"<<"\n";
    }
    else
        cout<<"not it"<<sum<<"\n";
}