#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int product = 1;
    int i=1;
    while(i<=n)
    {
        product*=i;
        i++;
    }
    cout<<"Product from 1 to "<<n<<": "<<product<<endl;
}