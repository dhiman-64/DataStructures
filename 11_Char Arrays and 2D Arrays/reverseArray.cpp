#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
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
    //Function Calling
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}