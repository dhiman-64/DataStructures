// Abstract Data Type -> LIFO

/*

- Insert -> push();
- remove  -> pop();
- topmost -> top();
- check is empty -> empty();
- size -> size()

*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"TopMost element is: "<<s.top()<<endl;
    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size is: "<<s.size()<<endl;

    return 0;
}