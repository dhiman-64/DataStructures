 #include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Mem FREE: "<<value<<endl;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail, int data)
{
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &tail ,Node* &head ,int data)
{
    if(tail == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = tail->next;
    }
    
}



void deleteNode(int k , Node* &head)
{

    // first node deletion
    if( k == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;  
        delete temp;      
    }

    // Midddle and last node
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        
        int count = 1;
        while(count < k)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}



int main()
{
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head,tail, 0);
    insertAtTail(tail,head, 2);
    insertAtTail(tail,head, 3);
    print(head);

    deleteNode(1, head);
    print(head);

}