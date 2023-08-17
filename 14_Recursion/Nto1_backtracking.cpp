#include<iostream>
using namespace std;


void solve( int n, int i)
{
    if( i>n )
    {
        return;
    }
    solve( n, i+1);
    cout<<i<<" ";
}


int main()
{
    int n;
    cin>>n;
    solve(n , 1);
    
    return 0;
}
