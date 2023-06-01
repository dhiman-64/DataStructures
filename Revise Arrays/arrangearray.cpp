#include<iostream>
using namespace std;

void arrangearray(int arr[] , int n)
{
   int odd = 1;
   int even = 2;
   if(n%2 == 0)
   {
    
    int mid1 = (n/2);
    for(int i=0 ; i<mid1 ; i++)
    {
        arr[i] = odd;
        odd += 2;
    }
    for(int j=n-1 ; j>=mid1 ; j--)
    {
        arr[j] = even;
        even += 2;
    }
   }
   else{
    int mid2 = (n/2) + 1;
    for(int i=0 ; i<mid2 ; i++)
    {
        arr[i] = odd;
        odd += 2;
    }
    for(int j=n-1 ; j>=mid2 ; j--)
    {
        arr[j] = even;
        even += 2;
    }
   }
}

void print(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    arrangearray(arr,n);
    print(arr,n);
}