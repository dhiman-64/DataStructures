#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Find the length of a string
    char input[100];
    cin.getline(input,100);
    int len = strlen(input);
    cout<<len<<endl;


    // Compare two strings -> strcmp(input1,input2)
    char input1[100];
    char input2[100];
    cin>>input1>>input2;
    int compare = strcmp(input1,input2);
    if(strcmp(input1,input2)==0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


    // Copy string -> strcpy(destination_string, source_string)
    char a[100],b[100];
    cin>>a;
    strcpy(a,b);
    cout<<a<<" "<<b;
    

    

}

