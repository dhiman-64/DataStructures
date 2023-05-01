#include<iostream>
using namespace std;

int sumNNumbers(int i, int sum)
{
    if(i<1){
        return sum;
    }
    sumNNumbers(i-1 , sum+i);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumNNumbers(n,0)<<endl;

    return 0;
}