#include<bits/stdc++.h>
using namespace std;

double geometricSum(int n)
{
    if(n==0){
        return 1;
    }
    int n2 = 2;
    for(int i=1 ; i<n ; i++)
    {
        n2 = n2*2;
    }
    double power = 1/(double)n2;
    return power + geometricSum(n-1);
}

int main()
{
    int n;
    cin>>n;
    //Function Calling
    cout<<fixed<<setprecision(5);
    cout<<geometricSum(n)<<endl;
}