#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max = INT_MIN;
    int secMax = INT_MIN;
    int num;
    int i = 1;
    while(i<=n){
        cin>>num;
        if(num>max){
            secMax = max;
            max = num;
        }
        else if(num>secMax &&num!=max){
            secMax = num;
        }
        i++;
    }
    cout<<secMax<<endl;
}