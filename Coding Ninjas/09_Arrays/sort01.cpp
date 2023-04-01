#include<iostream>
using namespace std;

void sort01(int arr[], int n)
{
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0) count++;
    }
    for(int i=0 ; i<count ; i++){
        cout<<0<<" ";
    }
    for(int i=count ; i<n ; i++){
        cout<<1<<" ";
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
    //Function calling
    sort01(arr,n);
}