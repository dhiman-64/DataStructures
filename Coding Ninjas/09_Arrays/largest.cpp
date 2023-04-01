#include<iostream>
#include<climits>
using namespace std;

int largest(int arr[], int n)
{
    int max = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i];
            continue;
        }
    }
    return max;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Function Calling
    cout<<largest(arr,n)<<endl;
}