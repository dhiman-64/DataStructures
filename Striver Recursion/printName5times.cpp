#include<iostream>
using namespace std;

int count = 0;
void print()
{
    if(count == 5) return;
    cout<<"Ikshit"<<endl;
    count++;
    print();
}

int main()
{
    print();

    return 0;
}