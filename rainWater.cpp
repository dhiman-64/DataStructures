#include<bits/stdc++.h>
using namespace std;

int trap(int arr[],int n){
    int left[n];
    int right[n];

    left[0] = arr[0];
    right[n-1] = right[n-1];

    //left 
    for(int i=1 ; i<n ; i++){
        left[i] = max(left[i-1] , arr[i]);
    }

    //right 
    for(int i=(n-2) ; i>=0 ; i--){
        right[i] = max(right[i+1] , arr[i]);
    }

    //result
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + (min(left[i],right[i])) - arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<=n ; i++){
        cin>>arr[i];
    }
    //Function Calling 
    cout<<trap(arr,n)<<endl;
}