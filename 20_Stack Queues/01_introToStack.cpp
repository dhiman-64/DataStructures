// Abstract Data type -->> LIFO

/*
Basic Operations 
- push()
- pop()
- top()
- size()
- isEmpty()
*/

#include<bits/stdc++.h>
using namespace std;

class Stack{
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

    // Return the Size of the stack
    int size(){
        return nextIndex;
    }

    // Check if empty or not
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
    }

    // insertion
    void push(int element){
        if(nextIndex == capacity){
            cout<<"Stack is full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // deletion
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    // Read top elemnt
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }

};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

}