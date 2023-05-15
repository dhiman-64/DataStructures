#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Stack{
    T *data;
    int nextIndex;
    int capacity;

    public:
    Stack()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        if(nextIndex == 0) return true;
        else return false;
    }

    void push(T element)
    {
        if(nextIndex == capacity){
            T *newData = new T[2*capacity];
            for(int i=0 ; i<capacity ; i++){
                newData[i] = data[i];
            }
            capacity *=2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};



int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.isEmpty()<<endl;

    Stack<char> s2;
    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);

    cout<<s2.top()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.size()<<endl;
    cout<<s2.isEmpty()<<endl;

}