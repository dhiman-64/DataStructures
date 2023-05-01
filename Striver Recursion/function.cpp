/*
What is Recursion?

-> When a function calls itself until a Specific condition is met.

*/

#include<iostream>
using namespace std;

/*
void print()
{
    cout<<1<<endl;
    print();
}

int main()
{
    print();

    return 0;
}
*/

// Condition = Base Case

int count = 0;
void print()
{
    if(count == 4)
    {
        return;
    }
    cout<<count<<endl;
    count++;
    print();
}

int main()
{
    print();

    return 0;
}

