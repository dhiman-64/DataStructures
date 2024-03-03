#include<bits/stdc++.h>
using namespace std;


int Smallest(int arr[] , int n)
{
    int mini = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}




int Largest(int arr[] , int n)
{
    int maxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}




int SecLargest(int arr[] , int n)
{
    int maxi = Largest(arr,n);
    int smaxi = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != maxi && arr[i] > smaxi)
        {
            smaxi = arr[i];
        }
    }
    return smaxi;
}



int SecSmallest(int arr[] , int n)
{
    int mini = arr[0];
    int smini = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] < mini)
        {
            smini = mini;
            mini = arr[i];
        }
        else if(arr[i] > mini && arr[i] < smini)
        {
            smini = arr[i];
        }
    }
    return smini;
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
    // Function Call
    int ans = Largest(arr,n);
    cout<<"Largest Element is: "<<ans<<endl;
    int ans1 = Smallest(arr,n);
    cout<<"Smallest Element is: "<<ans1<<endl;
    int ans2 = SecLargest(arr,n);
    cout<<"Second Largest Element is: "<<ans2<<endl;
    int ans3 = SecSmallest(arr,n);
    cout<<"Second Smallest Element is: "<<ans3<<endl;
}
