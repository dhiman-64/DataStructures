#include<iostream>
using namespace std;

void alternate(int arr[], int n)
{
    for(int i=0 ; i<n ; i+=2){
        if(i==n-1) continue; 
        swap(arr[i],arr[i+1]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Function calling
    alternate(arr,n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}