#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=2;
    int sum=0;
    while(i<=n)
    {
        if(n%i==0)
        {
            sum+=i;
            
        }
        i+=1;
    }
    cout<<"SUM: "<<sum<<endl;
}