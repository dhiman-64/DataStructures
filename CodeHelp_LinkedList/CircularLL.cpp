 #include<iostream>
 using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //Constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    // Deconstructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Free Mem: "<<value<<endl;
    }
};

void print(Node* &tail)
{
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

void insertNode(Node* &tail, int element, int data)
{
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

 int main()
 {
    Node* tail = NULL;
    insertNode(tail, 5,3);
    print(tail);
 }