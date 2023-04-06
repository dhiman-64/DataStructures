#include<iostream>
using namespace std;

void printNumber(int n)
{
    if(n==1){
        cout<<n<<" ";
        return;
    }
    printNumber(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    //Function Calling Using Recursion
    printNumber(n);
}