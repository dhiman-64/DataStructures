#include<iostream>
#include<cstring>
using namespace std;

void printSubstring(char str[])
{
    int n = strlen(str);
    for(int i=0 ; i<n ; i++){
        for(int j=i ;  j<n ; j++){
            for(int k=i ; k<=j ; k++){
                cout<<str[k];
            }   
            cout<<endl;
        }
    }
}

int main()
{
    int n = 1e6;
    char str[n];
    cin>>str;
    // Function Calling
    printSubstring(str);

}