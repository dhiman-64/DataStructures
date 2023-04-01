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
        int j=1;
        val=i;
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }
        j=((2*i)-2);
        while(j>=i-1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
        
    }
}