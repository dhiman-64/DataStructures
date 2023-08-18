/*
        Selection Sort
        - T(N) = O(N^2)
        - S(N) = O(1)
*/



#include<bits/stdc++.h>
using namespace std;



void selection_sort(int arr[] , int n )
{
    for(int i=0 ; i<=n-2 ; i++){
        int mini = i;
        for(int j=i ; j<=n-1 ; j++){
            if(arr[j] < arr[i])
            {
                mini = j;
            }
        }
        // Swap the Nodes
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
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
    // Functional Calling
    selection_sort(arr , n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
