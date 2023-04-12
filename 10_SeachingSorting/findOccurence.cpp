#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;
    int store = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            store = mid;
            start = mid+1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return store;
}

int firstOcc(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;
    int store = -1;
    while(start <= end){
        int mid = start +(end-start)/2;

        if(arr[mid]==target){
            store = mid;
            end = mid-1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
    }
    return store;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //Function Calling
    int last = lastOcc(arr,n,target);
    int first = firstOcc(arr,n,target);
    int totalOcc = last - first +1;
    cout<<totalOcc<<endl;

}