#include<iostream>
using namespace std;


void moveZeros(int arr[] , int n)
{
    int count = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            cout<<arr[i]<<" ";
            count++;
        }
    }
    for(int i=count ; i<n ; i++)
    {
        cout<<"0"<<" ";
    }
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
    // Functional Calling
    moveZeros(arr,n);
}
