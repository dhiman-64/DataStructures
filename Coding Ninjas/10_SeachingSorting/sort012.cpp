#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==0){
            count0++;
        }
        if(count1 == 1){
            count1++;
        }
    }
    for(int i=0;i<count0;i++){    //print 0
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    //print 1
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    //print 2
        arr[i]=2;
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
    //Function Calling
    sort012(arr,n);
    print(arr,n);
}