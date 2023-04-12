#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n-1;
    int store = -1;
    while(start <=  end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k){
            store = mid;
            end = mid-1;
        }
        else if(arr[mid] > k){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return store;
}

int lastOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n-1;
    int store = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k){
            store = mid;
            start = mid+1;
        }
        else if(arr[mid] > k){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return store;
}

pair<int,int>firstAndLastPosition(int arr[], int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        //Function Calling
        firstAndLastPosition(arr,n,k);
    }
}