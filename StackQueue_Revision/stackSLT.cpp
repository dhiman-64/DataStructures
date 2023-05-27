#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.pop();
    cout<<"Deleted: "<<s.size()<<endl;
    cout<<"Top-Most: "<<s.top()<<endl;
    if(s.empty())
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

}