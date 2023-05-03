#include<iostream>
using namespace std;

// T(N) = O(Nlog N)
// S(N) = O(1)




void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void quickSort(int arr[], int n)
{
// Find the Pivot element
// Smaller left to pIndex and Larger right to the pIndex
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
    // Function Call for Quick Sort
    quickSort(arr,n);
    print(arr,n);

    return 0;
}