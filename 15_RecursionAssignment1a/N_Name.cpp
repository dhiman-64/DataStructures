#include<iostream>
using namespace std;


void solve(int i, int n)
{
    if( i>n )
    {
        return;
    }
    cout<<"Ikshit Dhiman"<<endl;
    solve(i+1, n);
}


int main()
{
    int n;
    cin>>n;
    solve(1,n);
    
    return 0;
}
