#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int fibone=1;
    int fibsec=1;
    int fib=0;
    if(n==1 || n==2)
    {
        cout<<1;
    }
    for(int i=1;i<n-1;i++)
    {
        fib=fibone+fibsec;
        fibone=fibsec;
        fibsec=fib;
    }
    cout<<fib;
}