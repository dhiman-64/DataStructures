#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base Condition
    if(n==0){
        return 1;
    }
    // Hypothesis
    int ans = factorial(n-1);
    //Induction
    return n*ans;
}

int main()
{
    int n;
    cin>>n;
    //Function Calling
    cout<<factorial(n)<<endl;
}