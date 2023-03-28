#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    int odd=1;
    int even;
    if(n%2==0)
    {
        even = n;
        int mid1 = (n/2)-1;
        for(int i=0 ; i<=mid1 ; i++){
            cout<<odd<<" ";
            odd+=2;
        }
        for(int j=n-1 ; j>=mid1+1 ; j--){
            cout<<even<<" ";
            even-=2;
        }
    }
    else{
        even = n-1;
        int mid2 = n/2;
        for(int i=0 ; i<=mid2 ; i++){
            cout<<odd<<" ";
            odd+=2;
        }
        for(int j=n-1 ; j>=mid2+1 ; j--){
            cout<<even<<" ";
            even-=2;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    print(arr,n);    
}