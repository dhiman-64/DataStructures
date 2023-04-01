#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"SUM from 1 to "<<n<<": "<<sum<<endl;
}