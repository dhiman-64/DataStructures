#include<iostream>
#include<climits>
using namespace std;

class Stack{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:
    Stack()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
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
            int *newArray = new int[2*capacity];
            for(int i=0 ; i<capacity ; i++){
                newArray[i] = data[i];
            }
            capacity *=2;
            delete[] data;
            data = newArray;
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
    Stack s1;
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

