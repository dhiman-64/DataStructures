#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for(int i=0 ; i<n ; i++){
        if(arr[i]==target) return i;
    }
    return-1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //Function Calling
    cout<<linearSearch(arr,n,target)<<endl;
}