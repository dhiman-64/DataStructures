/*
        Insertion Sort
            - Best Case =  O(N)
            - T(N) = O(n^2)  // worst , Average 
            - S(N) = O(1)
*/


#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[] , int n)
{
    for(int i=0 ; i<=n-1 ; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
    insertion_sort(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
