#include<bits/stdc++.h>
using namespace std;

void help(char input[], int size)
{
    if(size==0){
        return;
    }
    if(input[0]=='p'){
        if(input[1]=='i'){
            for(int i=size ; i>1 ; i--){
                input[i+2] = input[i];
            }
            input[0] = '3';
            input[1] = '.';
            input[2] = '1';
            input[3] = '4';
            size = size+2;
        }
    }
    help(input+1, size-1);
}

void replacePi(char input[])
{
    int size = strlen(input);
    help(input,size);
}

int main()
{
    char input[10000];
    cin.getline(input,10000);
    replacePi(input);
    cout<<input<<endl;
}