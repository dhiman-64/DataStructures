#include<iostream>
using namespace std;

bool checkPal(int i, string &s)
{
    int n = s.size();

    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]){
        return false;
    }
    return checkPal(i+1,s);
}

int main()
{
    string s;
    cin>>s;
    if(checkPal(0,s)== true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}