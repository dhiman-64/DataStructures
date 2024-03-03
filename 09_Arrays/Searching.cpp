#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[] , int n , int target)
{
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            end = mid-1;
        }
        else if(arr[mid] < target)
        {
            start = mid+1;
        }
    }
    return -1;
}


int linearSearch(int arr[] , int n , int target)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"What to search: ";
    cin>>target;
    
    // Function Calling
    int f1 = linearSearch(arr,n,target);
    cout<<"Present at Index: "<<f1<<endl;
    int f2 = binarySearch(arr,n,target);
    cout<<"Present at Index: "<<f2<<endl;
}
