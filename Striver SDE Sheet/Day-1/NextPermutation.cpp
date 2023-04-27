#include<bits/stdc++.h>
using namespace std;

/*

Using STL function in C++
void nextPermutation(int arr[], int n)
{
    next_permutation(arr , arr+n);
}

*/


// T(N)  =  O(N)
// S(N)  =  O(1)


// Implementation of STL
void nextPermutation(int arr[], int n)
{
    int index = -1;
    // Find Breaking Point
    for(int i=n-2 ; i>=0 ; i--)
    {
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    //Edge Case
    if(index == -1)
    {
        reverse(arr , arr+n);
        return;
    }
    // Swap the Digits
    for(int i=n-1 ; i>index ; i--)
    {
        if(arr[i] > arr[index]){
            swap(arr[i] , arr[index]);
            break;
        }
    }
    // Arrange remaining element in Ascending Order
    reverse(arr+index+1 , arr+n);
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
    //Function Calling
    nextPermutation(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}