// #include<iostream>
// #include<climits>

// using namespace std;

// class Stack{
//     int *data;
//     int nextIndex;
//     int capacity;

//     public:
//     Stack(int totalSize){
//         data = new int[totalSize];
//         nextIndex = 0;
//         capacity = totalSize;    
//     }

//     // 1. SIZE
//     int getSize(){
//         return nextIndex;
//     }

//     // 2. Check if Empty
//     bool isEmpty(){
//         if(nextIndex == 0){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     // 3. Push -> insertion
//     void push(int element){
//         if(nextIndex == capacity){
//             cout<<"Stack is Full"<<endl;
//             return;
//         }
//         data[nextIndex] = element;
//         nextIndex++;
//     }

//     // 4. Pop -> deletion
//     int pop(){
//         if(isEmpty()){
//             cout<<"Stack is Empty"<<endl;
//             return INT_MIN;
//         }
//         nextIndex--;
//         return data[nextIndex];
//     }

//     // 5. Read uppermost element -> TOP()
//     int top(){
//         if(isEmpty()){
//             cout<<"Stack is Empty"<<endl;
//             return INT_MIN;
//         }
//         return data[nextIndex - 1];
//     }
// };

// int main()
// {
//     Stack s1(4);
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     s1.push(50);
//     cout<<s1.getSize()<<endl;
//     cout<<s1.top()<<endl;
//     cout<<s1.pop()<<endl;

//     cout<<s1.getSize()<<endl;
//     cout<<s1.top()<<endl;
//     cout<<s1.pop()<<endl;

//     cout<<s1.getSize()<<endl;
//     cout<<s1.top()<<endl;
//     cout<<s1.pop()<<endl;
// }



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

    int getSize(){
        return nextIndex;
    }

    bool isEmpty(){
        if(nextIndex == 0) return true;
        else return false;
    }

    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
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
};

int main()
{

}