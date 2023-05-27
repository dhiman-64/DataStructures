#include<iostream>
using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(T data){
        this->data = data;
        next = NULL;
    }
};


template<typename T>
class Stack{
    private:
    Node<T>* head;
    int size;

    public:

    Stack(){
        head = NULL;
        size = 0;
    }

    // Check Size()
    int getSize(){
        return size;
    }

    //EMPTY()
    bool isempty(){
        if(size == 0){
            return true;
        }
        else{
            return false;
        }
    }


    //PUSH()
    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    //POP()
    T pop(){
        if(isempty()){
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    // Top()
    T top(){
        if(isempty()){
            return 0;
        }
        return head->data;
    }
};


int main()
{
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isempty()<<endl;
    
}