#include<iostream>
using namespace std;

int factN(int n)
{
    if(n == 0) return 1;
    return n * factN(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factN(n)<<endl;

    return 0;
}