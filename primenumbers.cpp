#include<iostream>
using namespace std;
int main()
{
    int num=2,div,limit,flag=0;
    cout<<"enter the limit"<<"\n";
    cin>>limit;
    
    while(num<=limit){
        div=2;
        while(num>div){
            if(num%div==0){
                flag=1; 
                            
            }
            
           div++;
        }
        if(flag==0){
         cout<< num << "\t";
        }
            num++;
            flag=0;
    }
return 0;
}