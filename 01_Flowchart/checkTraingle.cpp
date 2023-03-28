#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter sides of triangle: ";
    cin>>a>>b>>c;

    if(a=b=c)
    {
        cout<<"1"<<endl;
    }
    else if(a==b || b==c || c==a){
        cout<<"2"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}