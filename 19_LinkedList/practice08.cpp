#include<iostream>
using namespace std;

class ikshit{
    public:
    int value;
    ikshit* address;
    ikshit(int value){
        this->value = value;
        this->address = NULL;
    }
};

ikshit* TakeInput()
{
    int data;
    cin>>data;
    ikshit* head = NULL;
    ikshit* tail = NULL;
    while(data != -1)
    {
        ikshit* nyaNode = new ikshit(data);
        if( head == NULL){
            head = nyaNode;
            tail = nyaNode;
        }
        else{
            tail->address = nyaNode;
            tail = tail->address;
        }
        cin>>data;
    }
    return head;
}


void print(ikshit* head, int position)
{
    ikshit* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        if(position == count){
            cout<<temp->value<<endl;
            return;
        }
        count++;
        temp = temp->address;
    }
}


int main()
{
    ikshit* head = TakeInput();
    int position;
    cin>>position;
    print(head, position);
    cout<<endl;
}