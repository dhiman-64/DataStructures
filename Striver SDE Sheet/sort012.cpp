#include<bits/stdc++.h>
using namespace std;

// Brute Force -> T(N)=O(NlogN)   S(N) = O(N)

// Better Approach -> T(n) = O(n+n)  S(N) = O(1)

// void sort012(int arr[], int n)
// {
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i=0 ; i<n ; i++){
//         if(arr[i]==0) count0++;
//         if(arr[i]==1) count1++;
//         if(arr[i]==2) count2++;
//     }

//     for(int i=0 ; i<count0 ; i++){
//         arr[i] = 0;
//     }
//     for(int i= count0 ; i<count0+count1 ; i++){
//         arr[i] = 1;
//     }
//     for(int i=count0+count1 ; i<n ; i++){
//         arr[i] = 2;
//     }
// }


// Optimised Approach  -> T(N) = O(N)  S(N) = O(1)

void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Function Call
    sort012(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}