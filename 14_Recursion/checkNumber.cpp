#include<iostream>
using namespace std;

bool checkNumber(int arr[], int n, int target)
{
    // Base Case
    if(n==0){
        return false;
    }
    // Hypothesis
    if(arr[0]==target){
        return true;
    }
    return checkNumber(arr+1,n-1,target);

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    // Function Calling
    if(checkNumber(arr,n,target)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}