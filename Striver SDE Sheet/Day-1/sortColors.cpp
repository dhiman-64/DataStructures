#include<iostream>
using namespace std;

// Otimised Approach
//T(N) = O(N)
//S(N) = O(1)

// Dutch Flag Algorithm
void sortColors(int arr[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid <= end)
    {
        if(arr[mid] == 0)
        {
            swap(arr[start] , arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid] , arr[end]);
            end--;
        }
    }
}

/*
//T(N) = O(N^2)
//S(N) = O(1)

void sortColors(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

        for(int i=0 ; i<count0 ; i++)
        {
            arr[i] = 0;
        }

        int total = count0 + count1;

        for(int i=count0 ; i<total ; i++)
        {
            arr[i] = 1;
        }
        for(int i=total ; i<n ; i++)
        {
            arr[i] = 2;
        }
    
}
*/

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    // Function Calling
    sortColors(arr,n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}