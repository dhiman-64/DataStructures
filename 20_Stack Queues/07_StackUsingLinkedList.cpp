#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    // Constructor
    Node(T data){
        this->data = data;
        next = NULL;
    }

};

template <typename T>
class Stack{
    Node<T>* head;
    int size;
    
    public:

    // Constructor
    Stack(){
        head = NULL;
        size = 0;
    }

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        if(size == 0) return true;
        else return false;
    }

};


int main()
{

}