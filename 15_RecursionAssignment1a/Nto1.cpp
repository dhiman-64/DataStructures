#include<iostream>
using namespace std;


void solve( int n , int i )
{
    //Base case
    if( i>n)
    {
        return;
    }
    cout<<n<<" ";
    solve(n-1, i);
}



int main()
{
    int n;
    cin>>n;
    solve(n, 1);
    
    return 0;
}
