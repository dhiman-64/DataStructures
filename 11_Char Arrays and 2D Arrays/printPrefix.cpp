#include<bits/stdc++.h>
using namespace std;

void printPrefix(char str[])
{
    // i represents end index of my prefix   
    for(int i=0; str[i]!='\0'; i++){
        // j represents start index of my presfix
        for(int j=0 ; j<=i ; j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}

int main()
{
    int n = 1e6;
    char str[n];
    cin>>str;
    //Function Calling
    printPrefix(str);
    // cout<<str;
}