#include<bits/stdc++.h>
using namespace std;

int help(char *a, int s)
{
    int p = a[0];
    p = p-48;
    if(s==1){
        return p;
    }
    return (p*pow(10,s-1) + help(a+1,s-1));
}

int stringToInt(char input[])
{
    int size = strlen(input);
    int ans = help(input,size);
    return ans;
}

int main()
{
    char input[100];
    cin>>input;
    cout<<stringToInt(input)<<endl;
}