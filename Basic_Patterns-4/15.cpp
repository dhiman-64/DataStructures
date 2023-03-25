#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows to print: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=n){
            char ans = ch+j-1;
            cout<<ans;
            j++;
        }
        cout<<endl;
        i++;
    }
}