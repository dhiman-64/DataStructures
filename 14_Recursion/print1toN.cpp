#include<iostream>
using namespace std;

void print(int n)
{
    // Base Condition
    if(n==0){
        return;
    }
    // Hypothesis
    print(n-1);
    //Induction
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    //Function Calling
    print(n);
}