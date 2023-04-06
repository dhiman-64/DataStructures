#include<iostream>
using namespace std;

int help(int arr[], int n, int x, int i)
{
    if(n==0){
        return -1;
    }
    if(arr[0]==x){
        return i;
    }
    help(arr+1, n-1, x, i+1);
}

int firstIndex(int arr[], int n, int x)
{
    int i=0;
    return help(arr,n,x,i);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    //Function Calling
    cout<<firstIndex(arr,n,x)<<endl;
}