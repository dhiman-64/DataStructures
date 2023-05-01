#include<iostream>
using namespace std;

int factN(int i, int prod)
{
    if(i < 1){
        return prod;
    }
    factN(i-1 , prod*i);
}

int main()
{
    int n;
    cin>>n;
    cout<<factN(n,1)<<endl;

    return 0;
}