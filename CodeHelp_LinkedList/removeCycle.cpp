//using floy's cycle detection algo
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = tail->next;
    }
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data)
{
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    // Traverse
    int count = 1;
    Node* temp = head;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    head->next = newNode;
}

Node* FloydCycle(Node* head)
{
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            cout<<"Present At: "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head == NULL){
        return NULL;
    }
    Node* intersection = FloydCycle(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head)
{
    if(head == NULL){
        return;
    }
    Node* startofLoop = getStartingNode(head);
    Node* temp = startofLoop;
    while(temp->next != startofLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtMiddle(head, tail, 5, 50);

    tail->next = head->next;

    if(FloydCycle(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not Present"<<endl;
    }

    cout<<"Loops starts at: "<<getStartingNode(head)->data<<endl;

    removeLoop(head);
    print(head);

    if(FloydCycle(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not Present"<<endl;
    }
}
