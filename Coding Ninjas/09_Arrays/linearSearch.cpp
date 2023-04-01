#include<iostream>
using namespace std;

int linearSearch(int arr2[], int n, int target2)
{
    for(int i=0 ; i<n ; i++){
        if(arr2[i]==target2){
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
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    //Function calling
    cout<<linearSearch(arr,n,target)<<endl;
}