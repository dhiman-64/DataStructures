// Queue -> Abstract Data Type ( FIFO )
// unlike stack, entry and exit points are different


// Functions ->
// 1. enqueue -> Insertion 
// 2. front -> Access the first element 
// 3. dequeue -> deletion
// 4. size -> return the size 
// 5. isEmpty -> check empty or not


#include<iostream>
using namespace std;


class queue{
    int *data;
    int nextIndex;
    int firstIndex;   

    queue(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        firstIndex = -1;
    }
};


int main()
{

}