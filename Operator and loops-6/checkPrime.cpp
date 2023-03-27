#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool b=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            b=true;
        }
    }
    if(b){
        cout<<"Not Prime"<<endl;
    }
    else cout<<"Prime"<<endl;
}