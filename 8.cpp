#include<iostream>
using namespace std;

int sorting(int arr[], int n){
    for(int i=0 ; i<=n ; i++){
        for(int j=i+1 ; j<=n ; j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<=n ; i++)
        {
            cin>>arr[n];
        }
        //function calling
        sorting(arr,n);
        for(int i=0 ; i<=n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}