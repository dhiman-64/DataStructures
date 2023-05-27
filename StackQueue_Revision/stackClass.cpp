#include<iostream>
using namespace std;

class Stack{
    private:
    int *data;
    int nextIndex;
    public:
    Stack(int totalsize){
        data = new int[totalsize];
        nextIndex = 0;
    }
};