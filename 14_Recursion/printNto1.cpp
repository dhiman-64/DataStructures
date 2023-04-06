#include<iostream>
using namespace std;

void print(int n)
{
    //Base Condition
    if(n==1){
        cout<<n<<" ";
        return;
    }
    //Hypotheis
    cout<<n<<" ";
    print(n-1);
    //Induction
}

int main()
{
    int n;
    cin>>n;
    //Function Calling
    print(n);
}