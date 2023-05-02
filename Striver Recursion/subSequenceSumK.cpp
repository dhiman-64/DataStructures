#include<bits/stdc++.h>
using namespace std;

void subSeqK(int index, vector<int> &v, int s, int target, int arr[], int n)
{
    if(index == n){
        if(s == target){
            for(auto it : v) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    v.push_back(arr[index]);
    s += arr[index];

    subSeqK(index+1, v, s, target,arr,n);
    s-=arr[index];
    v.pop_back();


    subSeqK(index+1, v,s, target,arr,n);
    

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
    int target;
    cin>>target;
    vector<int> v;
    subSeqK(0,v,0,target,arr,n);

    return 0;
}