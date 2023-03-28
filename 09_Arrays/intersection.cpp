#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n, int m)
{
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr1[i]==arr2[j]){
                arr2[j] = 0;
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr1[i];
    }
    //Array 2
    int m;
    cin>>m;
    int arr2[m];
    for(int j=0 ; j<m ; j++){
        cin>>arr2[j];
    }
    //Function Calling
    intersection(arr1,arr2,n,m);
    // for(int i=0 ; i<n ; i++){
    //     cout<<arr1[i]<<" ";
    // } 
}