#include<bits/stdc++.h>
using namespace std;

// T(N) = O(N)
// S(N) = O(1)

int maxProfit(int prices[], int n)
{
    int minPrice = INT_MAX;
    int profit = 0;
    for(int i=0 ; i<n ; i++)
    {
        minPrice = min(minPrice , prices[i]);
        profit = max(profit , prices[i]-minPrice);
    }
    return profit;
}

int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>prices[i];
    }
    //Function Calling
    cout<<maxProfit(prices,n)<<endl;
}