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
    int A,value,N;
    vector<vector<int> >v;
    for(int i=0;i<N;i++){
        cin>>A;
        vector<int>temp;
        for(int j = 0;j<A;j++){
            cin>>value;
            temp.push_back(value);
        }
        v.push_back(temp);
          printVect(v[i]);
            }
            //printVect(v);
 }
 