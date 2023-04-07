#include<bits/stdc++.h>
using namespace std;


bool help(char str[], int start, int end)
{
    // If only 1 element is present
    if(start>=end){
        return true;
    }
    // Check Whether Palindrome
    if(str[start]!=str[end]){
        return false;
    }
    bool smallCheck = help(str,start+1,end-1);
    return smallCheck;
}


bool checkPalindrome(char str[])
{
    int n = strlen(str)-1;
    int start = 0;
    int end  = n;
    return help(str,start,end);
}


int main()
{
    char str[100];
    cin>>str;
    if(checkPalindrome(str)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}