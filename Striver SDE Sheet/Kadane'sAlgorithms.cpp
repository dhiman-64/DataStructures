#include<bits/stdc++.h>
using namespace std;

int kadaneAlgorithms(int arr[], int n)
{
    int max_sum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<j; k++){
                sum+=arr[k];
            }
            if(sum>max_sum){
                
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //Function Calling
}