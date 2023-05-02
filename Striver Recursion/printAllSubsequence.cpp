#include<bits/stdc++.h>
using namespace std;

void subSequence(int *arr,vector<int> &v,int index, int n)
{
    if(index == n){
        for(auto it : v){
            cout<<it<<" ";
        }
        if(v.size() == 0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[index]);
    subSequence(arr,v,index+1,n);
    v.pop_back();


    subSequence(arr,v,index+1,n);
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
    vector<int> v;
    subSequence(arr,v,0,n);
        
}