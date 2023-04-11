#include<bits/stdc++.h>
using namespace std;

void help(char input[], int size, int a)
{
    if(input[a]=='\0'){
        return;
    }
    if(input[a]=='x'){
        for(int i=a ; i< size ; i++){
            input[i] = input[i+1];
        }
        size = size-1;
    }
    else{
        a++;
    }
    help(input,size,a);
}

void removeX(char input[])
{
    int size = strlen(input);
    int count = 0;
    help(input, size , count);
}

int main()
{
    char input[100];
    cin.getline(input,100);
    removeX(input);
    cout<<input<<endl;
}