#include<bits/stdc++.h>
using namespace std;


void help(char a[], int s)
{
    if(s==0){
        return;
    }
    if(a[0]==a[1]){
        for(int i=s ; i>0 ; i--){
            a[i+1] = a[i];
        }
        a[1]='*';
        s=s+1;
    }
    help(a+1,s+1);
}

void pairStar(char input[])
{
    int size = strlen(input);
    help(input,size);
}

int main()
{
    char input[100];
    cin.getline(input,100);
    pairStar(input);
    cout<<input<<endl;
}