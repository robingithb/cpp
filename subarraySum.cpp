#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,total=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum"<<endl;
    for(int i =0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
                sum += arr[j];
                cout<<sum<<endl;
               total=total+sum;
        }
      // total=total+sum;
    }
    cout<<"total sum is "<<total<<endl;
}