#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
 void printVect(vector<int>&v){
    for(int i = 0; i< v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"size:"<<v.size()<<"\n";
 }
int main(){
    vector<int>v;
    int n,number;
    cout<<"enter the limit";
    cin>>n;
    v.push_back(7);
    printVect(v);
    
    for(int i = 0 ;i<n;i++){
        cin>>number;
        v.push_back(number);
       
    }
    printVect(v);
    }