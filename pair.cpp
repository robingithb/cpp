
#include<bits/stdc++.h>
using namespace std;

int main(){
   // pair<int,string>p; 
   pair<int,string> p;
   // p=make_pair(1,"robin");   one way
   p={1,"robin"};
   pair<int,string> &p1=p;
  p1.first=2;


    cout<<p.first<<" "<<p.second<<"\n";
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    pair<int,int>p_array[3];
    p_array[0]={1,4};
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    cout<<p_array[0].first<< " "<<p_array[0].second;
    cout<<"\n for loop\n\n";
    for(int i = 0;i<3;i++){
        cout<<p_array[i].first<< " "<<p_array[i].second<<"\n";
    }
    cout<<"swap\n";
    swap(p_array[0],p_array[2]);
    for(int i = 0;i<3;i++){
        cout<<p_array[i].first<< " "<<p_array[i].second<<"\n";
    }
}