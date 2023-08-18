/*
        Bubble Sort
          T(N)  -> Best Case - O(N);
          T(N)  -> Worst, Average -  (N^2)
          S(N)  ->  O(1)
*/


#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[] , int n)
{
    for(int i=n-1 ; i>=1 ; i--)
    {
        for(int j=0 ; j<=i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    bubble_sort(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
