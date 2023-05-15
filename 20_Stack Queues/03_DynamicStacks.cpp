#include<iostream>
#include<climits>
using namespace std;


class Stack{
    int *data;
    int nextIndex;
    int capacity;

    public:
    Stack(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        if(nextIndex == 0) return true;
        else return false;
    }

    int pop()
    {
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }

    void push(int element)
    {
        if(nextIndex == capacity)
        {
            int *newData = new int[2*capacity];
            for(int i=0 ; i<capacity ; i++){
                newData[i] = data[i];
            }
            capacity *=2;
            delete []data;
            data = newData;
        }

        data[nextIndex] = element;
        nextIndex++;
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
    s1.push(60);


    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.isEmpty()<<endl;
    cout<<s1.size()<<endl;
}