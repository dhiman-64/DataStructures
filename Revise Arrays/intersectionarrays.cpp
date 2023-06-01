#include<iostream>
using namespace std;

void intersectionarray(int arr[], int arr2[], int n, int m)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(arr[i] == arr2[j]){
                arr2[j] = 0;
                cout<<arr[i]<<" ";
                break;
            }
        }
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
    int m;
    cin>>m;
    int arr2[m];
    for(int j=0 ; j<m ; j++)
    {
        cin>>arr2[j];
    }
    // Function Call
    intersectionarray(arr,arr2,n,m);
    // print(arr,n);
}