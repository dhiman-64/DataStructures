#include<iostream>
#include<climits>
using namespace std;

class Stack{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:
    Stack(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // Size()
    int size()
    {
        return nextIndex;
    }

    // isEmpty()
    bool isempty()
    {
        if(nextIndex == 0)
        {
            return true;
        }
        else
        {
        return false;
        }
    }

    // push()
    void push(int element)
    {
        if(nextIndex == capacity)
        {
            cout<<"Stack Full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    //pop()
    int pop()
    {
        if(isempty())
        {
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    //top()
    int top()
    {
        if(isempty())
        {
            cout<<"Stack Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }

};




int main()
{
    Stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout<<"Size: "<<s1.size()<<endl;
    cout<<"Deleted: "<<s1.pop()<<endl;
    cout<<"Topmost: "<<s1.top()<<endl;
    cout<<"Size: "<<s1.size()<<endl;
}   

