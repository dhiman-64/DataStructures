#include<iostream>
using namespace std;

void towerofHanoi(int n, char source, char auxilary, char destination)
{
    if(n==0){
        return;
    }
    towerofHanoi(n-1, source,destination,auxilary);
    cout<<source<<" "<<destination<<endl;
    towerofHanoi(n-1,auxilary,source,destination);
}

int main()
{
    int n;
    cin>>n;
    towerofHanoi(n,'a','b','c');
}