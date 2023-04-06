#include<iostream>
using namespace std;

int sumN(int n)
{
    //Base Case
    if(n==0){
        return n;
    }

    return n+(n*(n-1)/2);
}

int main()
{
    int n;
    cin>>n;
    //Function Calling 
    cout<<sumN(n)<<endl;
}