#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter sides of Traingle: ";
    cin>>a>>b>>c;

    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Valid Traingle"<<endl;
    }
    else
    {
        cout<<"Not a valid Traingle"<<endl;
    }
}