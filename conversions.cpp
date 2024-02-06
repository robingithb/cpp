#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void decimaltobinary( string n){
//     int ans = 0;
//     int x=1;
//     vector<int>v;
//     while(n>0){
//         ans=n%2;
//        v.push_back(ans) ;
//        // n/=2;
//     }
//     for(int i=v.size()-1;i>=0;i--){
//         cout<<v[i]<<" ";

//     }
//     cout<<endl;

// }
void hexadecimalToDecimal(string n){
   
    int ans = 0;
    int x =1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
         
        if((n[i]>='0')&&(n[i]<='9')){
            ans += x*(n[i]-'0');
            
        }
        else{
            if((n[i]>='A')&&(n[i])<='F'){
                ans+= x*(n[i]-'A'+10);
            }
            x*=16;
        }
     }
      cout<<ans<<" "<<endl;

    

}
int main(){
    int ch;
    string n;
    cout<<"enter the number"<<"\n";
    cin>>n;
    cout<<"enter the choices"<<"\n";
    cin>>ch;
    switch (ch)
    {
    // case 1:decimaltobinary(n);
    // break;
    case 2 : hexadecimalToDecimal(n);
    break;
    // case 3 : octaltodecimal(n);
    // break;
    default:
        break;
    }
}