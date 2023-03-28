#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows to print: ";
    cin>>n;

    int i=1;
    int val=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=0;
        val=i;
        while(j!=2*i-1){
            cout<<"*";
            j++;
        }
        space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        cout<<endl;
        i++;
    }
}