#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if (a == 0)
    {
        return b;
    }
    return gcd(b%a , a);
}

int main()
{
    int a = gcd(10 , 5);
    cout<<a<<endl;
}