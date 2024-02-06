#include<bits/stdc++.h>
using namespace std;

int binarysearch(int *arr,int key,int n){
    int b=0;
    int e=n;
    while(b<=e){
        int mid = (e+b)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
            b=mid+1;
    }
    return -1;
    
}

int main(){
    int n,arr[10],key;
    cout<<"enter the size of n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key to find"<<endl;
    cin>>key;
    int x = binarysearch(arr,key,n);
    cout<<arr[x]<<endl;
    }