#include<iostream>
using namespace std;

int duplicate(int arr[] , int n)
{
    int store, count = 0;
    for(int i=0 ; i<n ; i++){
        store = arr[i];
        for(int j=0 ; j<n ; j++){
            if(store == arr[j]){
                count++;
            }
        }
        if(count == 2){
            return store;
        }
        else{
            count = 0;
        }
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
    //Function Call
    cout<<duplicate(arr,n)<<endl;
}