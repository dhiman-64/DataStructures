#include<iostream>
using namespace std;

int mul(int n, int m)
{
    if(n==0){
        return 0;
    }
    return m+mul(m,n-1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    // Function Calling
    cout<<mul(n,m)<<endl;
}