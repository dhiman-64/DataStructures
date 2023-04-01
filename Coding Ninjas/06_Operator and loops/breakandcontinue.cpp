#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=2;
    bool ans = false;
    while(i<n)
    {
        if(n%i==0){
            ans=true;
            break;
        }
        i++;
    }
    if(ans) cout<<"Not Prime"<<endl;
    else cout<<"Prime"<<endl;
}