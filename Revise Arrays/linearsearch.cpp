#include<iostream>
using namespace std;

int linearsearch(int arr[] , int n , int key)
{
    for(int i=0 ; i<n ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
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
    // what to find
    int key;
    cin>>key;
    cout<<"At Index: "<<linearsearch(arr,n,key)<<endl;
}