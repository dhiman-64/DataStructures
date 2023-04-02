#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(char str[], char ch1, char ch2)
{
    int n=strlen(str);
    for(int i=0; i<n;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
    }
}

int main()
{
    int n=1e6;
    char str[n];
    cin>>str;
    char ch1,ch2;
    cin>>ch1>>ch2;
    replaceCharacter(str,ch1,ch2);    
    cout<<str<<endl;
}