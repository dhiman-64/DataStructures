#include<iostream>
using namespace std;

int sumDigit(int n)
{
    //Base Case 
    if(n==0){
        return 0;
    }
    int ans = n%10;
    return ans + sumDigit(n/10);
}

int main()
{
    int n;
    cin>>n;
    //Function Calling
    cout<<sumDigit(n)<<endl;
}