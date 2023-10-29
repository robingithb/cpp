#include<iostream>
using namespace std;
int main()
{
    int num,div, flag=0;
    cout<<"enter the number";
    cin>>num;
    div= 2;
    for(div =2;div<num;div++){
        if(num%div==0){
            flag++;
        }
    }
    if(flag !=0){
        cout<<num <<"not prime";
    }
    else{
        cout<<num <<"is prime";
    }
}