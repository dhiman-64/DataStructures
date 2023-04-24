#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }
    return sum;
}



int linearSearch(int arr[], int n, int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == key) return i;
    }
    return -1;
}



void ArrangeArray(int arr[], int n)
{
    int odd = 1;
    int even = 2;
    // Odd
    if((n % 2) != 0){
        int mid1 = (n-1)/2;
        for(int i=0 ; i<=mid1 ; i++){
            arr[i] = odd;
            odd += 2;
        }
        for(int j=n-1 ; j>mid1 ; j--){
            arr[j] = even;
            even+=2;
        }
    }
    else{
        int mid2 = (n/2);
        for(int i=0 ; i<mid2 ; i++){
            arr[i] = odd;
            odd += 2;
        }
        for(int j=n-1 ; j>=mid2 ;  j--){
            arr[j] = even;
            even+=2;
        }
    }
}



void swapAlternate(int arr[], int n)
{
    for(int i=0 ; i<n ; i+=2){
        for(int j=i+1 ; j<n ; j=i+1){
            swap(arr[i],arr[j]);
        }
    }
}



int unique(int arr[], int n)
{
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count==1) return arr[i];
        count=0;
    }
}



int duplicate(int arr[], int n)
{
    int count=0;
    int store;
    for(int i=0 ; i<n ; i++){
        store = arr[i];
        for(int j=i+1 ; j<n ; j++){
            if(store==arr[j]){
                count++;
            }
        }
        if(count>1){
            return store;
        }
        count = 0;
    }
}



void intersectionArrays(int arr[], int arr2[], int n, int m)
{
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i] == arr2[j]){
                arr2[j] = 0;
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
}



int pairSum(int arr[], int n, int target)
{
    int count =0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }
    return count;
}



int tripletSum(int arr[], int n, int target)
{
    int count =0 ; 
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    count++;
                }
            }
        }
    }
    return count;
}



void Sort01(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
    }
    for(int i=0 ; i<=count0 ; i++){
        arr[i] = 0;
    }
    for(int i=count0 ; i<n ; i++){
        arr[i] = 1;
    }
}





int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    // Functions Call
    
}