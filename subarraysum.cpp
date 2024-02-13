#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i< n;i++){
        cin>>a[i];
    }
    int t ;
    cin>>t;
    int i=0;
    int j= 0;
    int sum= 0;
    int st=-1;
    int en = -1;
    while(j<n&& sum+a[j]<t){
        sum+=a[j];
        j++;
    }
    if(sum==t){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum= sum+a[j];
        while(sum>t){
            sum-=a[i];
            i++;
        }
        if(sum==t){
            st=i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}