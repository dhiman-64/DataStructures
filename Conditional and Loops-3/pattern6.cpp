#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numbers of rows to print: ";
    cin>>n;

    int i=1;
    int val=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        val=i;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
}