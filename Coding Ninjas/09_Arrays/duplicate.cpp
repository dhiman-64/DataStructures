#include<iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[i]==arr[j]) count++;

        }
        if(count==2) return arr[i];
        else count=0;
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
    cout<<duplicate(arr,n)<<endl;
}