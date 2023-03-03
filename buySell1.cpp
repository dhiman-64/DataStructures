#include<bits/stdc++.h>
using namespace std;

int buysell(int arr[], int n){
    int profit = 0;
    int minprice = INT_MAX;
    for(int i=0 ; i<n ; i++){
        minprice = min(minprice , arr[i]);
        profit = max(profit , arr[i]-minprice);
    }
    return profit;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<=n ; i++)
    {
        cin>>arr[i];
    }
    //Function Calling 
    cout<<buysell(arr,n)<<endl;
}