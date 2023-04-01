#include<iostream>
using namespace std;

int pairSum(int arr[], int n, int targetSum)
{
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==targetSum) count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int targetSum;
    cin>>targetSum;
    //Function Calling
    cout<<pairSum(arr,n,targetSum)<<endl;
}