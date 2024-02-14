#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int  i = 0;i<n;i++){
        cin>>a[i];
    }
    int maxsum = INT_MIN;
    // for(int i =0;i<n;i++){
    //     for(int j = i;j<n;j++){
    //         int sum = 0;
    //         for(int k =i;k<=j;k++){
    //             sum+=a[k];
    //        }
    //         maxsum= max(maxsum,sum);
    //     }
    // }

    //way two
    // int csum[n+1];
    // csum[0]=0;
    // for(int i=1;i<=n;i++){
    //     csum[i] = csum[i-1]+a[i-1];
    // }
    // for(int i =1;i<=n;i++){
    //     int sum = 0;
    //     for(int j =0;j<i;j++){
    //         sum = csum[i]-csum[j];
    //          maxsum = max(maxsum,sum);
    //     }
       
    // }
    // cout<<maxsum<<endl;

    //way 3
        int csum = 0;
        for(int i = 0;i<n;i++){
            csum+=a[i];
            if(csum<0){
                csum=0;
            }
            maxsum = max(maxsum,csum);
        }
        cout<<maxsum<<endl;
}


