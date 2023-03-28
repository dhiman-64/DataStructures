#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) end--;
        else start++;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //Function calling
    cout<<binarySearch(arr,n,target)<<endl;
}