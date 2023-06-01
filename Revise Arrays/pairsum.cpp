#include<iostream>
using namespace std;

int pairsum(int arr[] , int n, int target)
{
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] + arr[j] == target){
                count++;
            }
        }
    }
    return count;
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
    int target;
    cin>>target;
    //Function Call
    cout<<"Total Pair Count: "<<pairsum(arr,n,target)<<endl;
}