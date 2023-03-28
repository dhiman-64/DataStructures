#include<iostream>
#include<climits>
using namespace std;

void selection(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++){
    //find the minimum element
    int min=arr[i];
    int minindex=i;
    for(int j=i+1 ; j<n ; j++){
        if(arr[j]<min){
            min=arr[j];
            minindex=j;
        }
    }
    //SWAP
    int temp;
    temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
    }
}

void print(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
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
    //Function Calling
    selection(arr,n);
    print(arr,n);
}