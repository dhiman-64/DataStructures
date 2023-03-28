#include<iostream>
using namespace std;

int main()
{
    int n,ch;
    cout<<"Enter a number: ";
    cout<<"Enter the Choice: ";
    cin>>n>>ch;
    int sum=0;
    int product=1;
    if(ch==1)
    {
        for(int i=1 ; i<=n ; i++)
        {
            sum+=i;
        }
        cout<<sum;
    }
    else if(ch==2)
    {
        for(int i=1 ; i<=n ; i++)
        {
            product*=i;
        }
        cout<<product;
    }
    else
    {
        cout<<-1;
    }
}