#include<iostream>
using namespace std;

bool isPrime(int n){
    int i=2;
    while(i<=n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=2 ; i<n ; i++){
        if(isPrime(i)){
            cout<<i<<endl; 
        }
    }
}