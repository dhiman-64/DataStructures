#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n , int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start + (end-start))/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<binarysearch(arr,n,target)<<endl;
}