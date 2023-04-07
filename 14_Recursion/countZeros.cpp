#include<iostream>
using namespace std;

int countZeros(int n)
{
    if(n==0){
        return 0;
    }
    int rem  = n%10;
    if(rem==0){
        return 1+countZeros(n/10);
    }
    else{
        return countZeros(n/10);
    }
}

int main()
{
    int n;
    cin>>n;
    //Function Calling 
    cout<<countZeros(n)<<endl;
}