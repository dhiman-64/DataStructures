#include<iostream>
using namespace std;

void swapalternate(int arr[] , int n)
{
    for(int i=0 ; i<n ; i+=2){
        if(i==n-1) continue; 
        swap(arr[i],arr[i+1]);
    }
}

void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    swapalternate(arr,n);
    print(arr,n);
}