#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++){
        bool swapped = false;
        for(int j=0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        //Already Sorted
        if(swapped==false) break; 
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
    bubbleSort(arr,n);
    print(arr,n);
}