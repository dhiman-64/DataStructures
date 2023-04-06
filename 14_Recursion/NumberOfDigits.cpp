#include<iostream>
using namespace std;

int countNumbers(int n)
{
    if(n==0){
        return 0;
    }
    return countNumbers(n/10) + 1; 
}

int main()
{
    int n;
    cin>>n;
    cout<<countNumbers(n)<<endl;
}