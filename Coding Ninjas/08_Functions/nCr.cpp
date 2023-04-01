#include<iostream>
using namespace std;

int factorial(int n)
{
    int p = 1;
    for(int i=1 ; i<=n ; i++){
        p*=i;
    }
    return p;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int nfac = factorial(n);
    int rfac = factorial(r);
    int n_rfac = factorial(n-r);
    int ans = nfac/(rfac*n_rfac);
    cout<<ans<<endl;
}