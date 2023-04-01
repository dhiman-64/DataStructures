#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows to print: ";
    cin>>n;

    int i,j,k;
    for(i=n ; i>=1 ; i--){
        for(j=1 ; j<=n ; j++){
            if(j<=i){
                cout<<j;
            }
            else{ 
                cout<<"*";
            }
        }

        for(j=n ; j>=1 ; j--){
            if(j<=i){
                cout<<j;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

}