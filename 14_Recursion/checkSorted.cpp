#include<iostream>
using namespace std;

bool checksorted(int arr[], int n)
{
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return checksorted(arr+1, n-1);
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
    cout<<checksorted(arr,n) ? "True" : "False";
}