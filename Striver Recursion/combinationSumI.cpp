#include<bits/stdc++.h>
using namespace std;

void findCombination(int index, int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if(arr.size() == 0){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[index] <= target){
        ds.push_back(arr[index]);
        findCombination(index,target-arr[index],arr,ans,ds);
        ds.pop_back();
    }
    findCombination(index+1,target,arr,ans,ds);
}

vector<vector<int>> combinationSum(vector<int> arr, int n, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,target,arr,ans,ds);
    return ans; 
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    //Function calling
    int target;
    cin>>target;

    combinationSum(arr,n, target);
    
}