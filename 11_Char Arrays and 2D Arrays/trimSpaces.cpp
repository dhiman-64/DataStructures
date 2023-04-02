#include<bits/stdc++.h>
using namespace std;

void trimSpaces(char str[])
{
    int index=0;
    int n=strlen(str);
    for(int i=0 ; i<n ; i++){
        if(str[i] != ' '){
            str[index]=str[i];
            index++;
        }
    }
    str[index]='\0';
}

int main()
{
    int n=1e6;
    char str[n];
    cin>>str;
    cin.getline(str,n);
    //Function Calling
    trimSpaces(str);
    cout<<str<<endl;
}