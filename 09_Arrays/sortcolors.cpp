#include<bits/stdc++.h>
using namespace std;


void sort012(int arr[] , int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }
    for(int i=0 ; i<count0 ; i++)
    {
        arr[i] = 0;
    }
    int total = count0+count1;
    for(int i=count0 ; i<total ; i++)
    {
        arr[i] = 1;
    }
    for(int i=total ; i<n ; i++)
    {
        arr[i] = 2;
    }
}


void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    // Functional Call
    sort012(arr,n);
    print(arr,n);
}
