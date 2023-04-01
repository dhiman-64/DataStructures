#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    bool flag = false;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            flag=true;
        }
        i++;
    }
    if(flag==true){
        cout<<"NOT Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}