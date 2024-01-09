#include<iostream>
using namespace std;


void pattern_1(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        // Spacing
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout<<" ";
        }
        // Main pattern
        for(int j=0 ; j<2*i+1 ; j++)
        {
            cout<<"*";
        }
        // Spacing
        for(int j=0 ; j<n ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern_2(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        //spacing
        for(int j=0 ; j<i ; j++)
        {
            cout<<" ";
        }
        // Main Pattern
        for(int j=0 ; j<2*n-(2*i+1) ; j++)
        {
            cout<<"*";
        }
        //spacing
        for(int j=0 ; j<i ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cin>>n;
    pattern_1(n);
    pattern_2(n);
}
