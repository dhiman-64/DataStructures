#include<iostream>
using namespace std;

// void selectionSort(int arr[], int n)
// {
//     for(int i=0 ; i<n-1 ; i++){
//         int minindex = i;
//         for(int j=i+1 ; j<n ; j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[minindex],arr[i]);
//     }
// }

// void bubbleSort(int arr[], int n)
// {
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n-i ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

void insertionSort(int arr[], int n)
{
    for(int i=1 ; i<n ; i++){
        int current = arr[i];
        int j;
        for(j=i-1 ; j>=0 ; j--){
            if(current<arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = current;
    }
}

void print(int arr[], int n)
{
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
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
    //Function calling
    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    insertionSort(arr,n);
    print(arr,n);
}