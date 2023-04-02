#include<bits/stdc++.h>
using namespace std;

bool palindrome(char str[])
{
    int i=0;
    int j=strlen(str)-1;
    while(j>i){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int n = 1e6;
    char str[n];
    cin>>str;
    cout<<(palindrome(str) ? "true" : "false");
}