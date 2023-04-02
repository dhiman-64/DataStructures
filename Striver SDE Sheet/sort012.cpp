#include<bits/stdc++.h>
using namespace std;


// 1. Brute Force -> Merge Sort
// 2. Better Aproach -> using count of each 0,1,2
// 3. Optimised Approach -> Dutch National Algoritms

void print(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    for(int i=0; i<count0; i++){
        arr[i]=0;
    }
    int temp = count0 + count1;
    for(int i=count0; i<temp; i++){
        arr[i]=1;
    }
    for(int i=temp; i<n; i++){
        arr[i]=2;
    }
    print(arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // Function Calling
    sort012(arr,n);
}