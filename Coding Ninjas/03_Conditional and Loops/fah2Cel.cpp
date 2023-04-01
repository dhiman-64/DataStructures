#include<iostream>
using namespace std;

int main()
{
    int s,e,w;
    cin>>s>>e>>w;
    int c;
    while(s<=e)
    {
        c=(s-32)*5/9;
        cout<<c<<endl;
        s+=w;
    }

}