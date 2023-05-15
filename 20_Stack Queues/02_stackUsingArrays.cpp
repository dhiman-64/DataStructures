#include<iostream>
#include<climits>
using namespace std;

class StackUsingArrays{
    int *n;
    int nextIndex;
    int capacity;

    public:
    StackUsingArrays(int totalSize){
        n = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // To find the size of the stack
    int size(){
        return nextIndex;
    }

    // check if empty
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
    }

    // Insertion using push()
    void push(int element)
    {
        if(nextIndex == capacity){
            cout<<"Stack is Full"<<endl;
            return;
        }
        n[nextIndex] = element;
        nextIndex++;
    }

    // Deletion using pop()
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return n[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return n[nextIndex -1];
    }
};

int main()
{
    StackUsingArrays s1(5);

    cout<<s1.isEmpty()<<endl;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);
    cout<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<s1.top()<<endl;

}