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
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        int k=2;
        while(k<=i){
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
}