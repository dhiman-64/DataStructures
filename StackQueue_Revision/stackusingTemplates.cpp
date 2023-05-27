#include<iostream>
#include<climits>
using namespace std;

template <typename T>
class Stack{
    private:
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
    void push(T element)
    {
        if(nextIndex == capacity)
        {
            T *newArray = new T[2*capacity];
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
    T pop()
    {
        if(isempty())
        {
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    //top()
    T top()
    {
        if(isempty())
        {
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
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
    cout<<"Size: "<<s1.size()<<endl;
    cout<<"Deleted: "<<s1.pop()<<endl;
    cout<<"Topmost: "<<s1.top()<<endl;
    cout<<"Size: "<<s1.size()<<endl;
}   

