#include<bits/stdc++.h>
using namespace std;

// Brute Force -> Power Set 
//T(N) = O(2^n * n)



// Optimised Approach
// using recursion
// T(N) = O(2^n + 2^nlog N(2^n))


    void func(int index, int sum, vector<int> &arr, int N, vector<int>&sumSubset){
        if(index == N){
            sumSubset.push_back(sum);
            return;
        }
        
        func(index+1, sum+arr[index], arr, N, sumSubset);
        func(index+1 , sum, arr, N, sumSubset);
    }
    
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumSubset;
        func(0,0,arr,N,sumSubset);
        sort(sumSubset.begin() , sumSubset.end());
        return sumSubset;
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
    // Function Calling

}