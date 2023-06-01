#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[] , int n)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
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
    cout<<"Largest: "<<largest(arr,n)<<endl;
}