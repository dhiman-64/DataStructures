#include<bits/stdc++.h>
using namespace std;

// T(N) = O(N)
// S(N) = O(N)
 
vector<int> twoSum(int arr[], int n, int target)
{
    map<int ,int > mpp;
    for(int i=0 ; i<n ; i++)
    {
        int x = arr[i];
        int other = target - x;
        if(mpp.find(other) != mpp.end()){
            return {mpp[other] , i};
        }
        mpp[x] = i;
    }
    return{-1,-1};
}



// Brute Force
/*

T(N) = O(N^2)
S(N) = O(1)

vector<int> twoSum(int arr[], int n, int target)
{
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] + arr[j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
*/

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    // Function Calling
    vector<int> ans = twoSum(arr,n,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}