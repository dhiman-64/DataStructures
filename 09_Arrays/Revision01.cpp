#include<bits/stdc++.h>
using namespace std;


// void print(int arr[], int n)
// {
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// void swapAlternate(int arr[], int n)
// {
//     for(int i=0 ; i<n ; i+=2){
//         for(int j=i+1 ; j<n ; j=i+1){
//             swap(arr[i],arr[j]);
//         }
//     }
// }


// void arrangeArray(int arr[], int n)
// {
//     int odd = 1;
//     int even = 2;
//     if(n%2==0){
//         int mid1 = (n/2)-1;
//         even = n;
//         for(int i=0 ; i<=mid1 ; i++){
//             cout<<odd<<" ";
//             odd+=2;
//         }
//         for(int i=n-1 ; i>=mid1+1 ; i--){
//             cout<<even<<" ";
//             even-=2;
//         }
//     }
//     else{
//         int mid2 = (n/2);
//         even = n-1;
//         for(int i=0 ; i<=mid2 ; i++){
//             cout<<odd<<" ";
//             odd+=2;
//         }
//         for(int i=n-1 ; i>=mid2+1 ; i--){
//             cout<<even<<" ";
//             even-=2;
//         }
//     }
// }


// int linearSearch(int arr[], int n, int target)
// {
//     for(int i=0 ; i<n ; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }


// int pairSum(int arr[], int n)
// {
//     int sum=0;
//     for(int i=0 ; i<n ; i++){
//         sum = sum+arr[i];
//     }
//     return sum;
// }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    //Function Calling
    // swapAlternate(arr,n);
    // print(arr,n);
}