#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"Equal"<<endl;
    }
    else if(a>b)
    {
        cout<<"A is Greater"<<endl;
    }
    else{
        cout<<"B is Greater"<<endl;
    }
}