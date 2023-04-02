#include<bits/stdc++.h>
using namespace std;

void reverseString(char str[])
{
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}

int main()
{
    int n = 1e6;
    char str[n];
    cin.getline(str,n);
    //Function Calling
    reverseString(str);
    cout<<str<<endl;
}