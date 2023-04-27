#include<bits/stdc++.h>
using namespace std;

// T(N) = O(N)
// S(N) = O(1)

// Kadanes Algorithm
int maxSubArray(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];

        if(sum > maxi)
        {
            maxi = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
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
    //Function Calling
    cout<<maxSubArray(arr,n)<<endl;
}