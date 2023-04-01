#include<bits/stdc++.h>
using namespace std;


// Brute Force ------->
// T(n) = O(n^2)
//S(n) = O(1)

// int maxPro(vector<int> &arr)
// {
//     int maxProfit = 0;
//     int n = arr.size();

//     for(int i=0 ; i<n ; i++){
//         for(int j=i+1 ; j<n ; j++){
//             if(arr[j]>arr[i]){
//                 maxProfit = max(arr[j]-arr[i], maxProfit);
//             }
//         }
//     }
//     return maxProfit;
// }


// Optimised Approach ------>
int maxPro(vector<int> &arr)
{
    int n = arr.size();
    int profit = 0;
    int minPrice = INT_MAX;
    for(int i=0 ; i<n ; i++){
        minPrice = min(minPrice, arr[i]);
        profit = max(profit, arr[i]-minPrice);
    }
    return profit;
}

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int maxProfit = maxPro(arr);
    cout<<"Max Profit is: "<<maxProfit<<endl;
}