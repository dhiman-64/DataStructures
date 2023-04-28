#include<bits/stdc++.h>
using namespace std;


// Other Approaches ->
// 4. Binary Search
// 5. Cycle sort



//Using Slow And Fast Pointer


int FindDuplicate(int arr[], int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow != fast);
    fast = arr[0];

    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}


/*
// Using MAP
T(N) = O(NlogN)
S(N) = O(N)

int FindDuplicate(int arr[], int n)
{
    int Store = 0;
    map<int, int> mpp;
    for(int i=0 ; i<n ; i++)
    {
        mpp[arr[i]]++; 
    }
    for(auto it : mpp)
    {
        if(it.second > 1)
        {
            Store = it.first;
            break;
        }
    }
    return Store;
}

*/


/*
Brute Force 
T(N) = O(N^2)
S(N) = O(1)

int FindDuplicate(int arr[], int n)
{
    int count = 0;
    for(int i=0 ; i<n ; i++){
        int store = arr[i];
        for(int j=0 ; j<n ; j++){
            if(store == arr[j]){
                count++;
            }
        }
        if(count == 2){
            return store;
        }
        else{
            count = 0;
        }
    }
}

*/

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
    cout<<FindDuplicate(arr,n)<<endl;
}