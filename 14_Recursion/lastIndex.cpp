#include<bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int x)
{
    if(n==0){
        return -1;
    }
    if(arr[n-1]==x){
        return n-1;
    }
    return lastIndex(arr,n-1,x);
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    cout<<lastIndex(arr,n,x)<<endl;
}