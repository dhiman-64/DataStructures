#include<iostream>
using namespace std;

void reverseArray(int arr[], int l, int r)
{
    if(l >= r) return;
    swap(arr[l] , arr[r]);
    reverseArray(arr, l+1 , r-1);
}

void print(int *arr , int n)
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
    //Function Call
    reverseArray(arr,0,n-1);
    print(arr,n);

    return 0;
}