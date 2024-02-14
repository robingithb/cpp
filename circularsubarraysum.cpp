#include<bits/stdc++.h>
using namespace std;

int kidene(int a[],int n){
    int maxsum = INT_MIN;
    int csum=0;
    for(int i= 0;i<n;i++){
        csum+=a[i];
        if(csum<0){
            csum=0;
        }
        maxsum = max(csum,maxsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum=0;
    int nonwrapsum=0;

    nonwrapsum = kidene(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
        
    }
    int ans = kidene(a,n);
    wrapsum=totalsum + ans;
    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    
}