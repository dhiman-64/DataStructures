#include<iostream>
using namespace std;

int unique(int arr[] , int n)
{
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1)
        {
            return arr[i];
        }
        count = 0;
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
    // Fucntion Call
    cout<<unique(arr,n)<<endl;
}