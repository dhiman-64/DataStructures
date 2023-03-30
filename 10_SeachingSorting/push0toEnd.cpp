#include<iostream>
using namespace std;

void moveZero(int arr[], int n)
{
    int index=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            arr[index] = arr[i];
            index++;
        }
    }
    while(index<n){
        arr[index] = 0;
        index++;
    }
}

void print(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    // Function Calling 
    moveZero(arr,n);
    print(arr,n);
}