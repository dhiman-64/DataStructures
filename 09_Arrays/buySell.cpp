#include<bits/stdc++.h>
using namespace std;


int buySell(int arr[] , int n)
{
    int minPrice = INT_MAX;
    int profit = 0;
    for(int i=0 ; i<n ; i++)
    {
        minPrice = min(minPrice , arr[i]);
        profit = max(profit , arr[i]-minPrice);
    }
    return profit;
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
    // Function call
    int result = buySell(arr,n);
    cout<<result<<endl;
}
