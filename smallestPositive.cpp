#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int small=INT_MAX;
    int ans= 0;
    for(int i=0;i<n;i++){
        if(small>a[i]&&a[i]>0){
            small=a[i];
        }
    }
    for(int i =small;i<0;i--){
            ans=i;
    }
    cout<<ans+1<<endl;
}