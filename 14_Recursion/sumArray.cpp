#include<iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    // Base Case
    if(n==0){
        return 0;
    }
    // Hypothesis
    return arr[0] + sumArray(arr+1, n-1);
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
    cout<<sumArray(arr,n)<<endl;
}