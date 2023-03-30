#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int secLargest(int arr[], int n)
{
    int max = INT_MIN;
    int secmax = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]<max && arr[i]>secmax){
            secmax = arr[i];
        }
    }
    return secmax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Function Calling
    cout<<secLargest(arr,n)<<endl;
}