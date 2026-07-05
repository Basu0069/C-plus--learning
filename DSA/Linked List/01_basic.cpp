// INsertion at start and end both 

#include<iostream>
using namespace std;






class Node{
    public:
    int data;
    Node* next;

    // constructor called here 
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};



void insertAtHead(Node* &head, int d ){
// new node created here 
    Node* temp= new Node(d);
    temp->next= head;
    head= temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}


void print(Node* &head){

    Node* temp= head;

    while(temp!=NULL){
        cout<<temp-> data <<" ";
        temp= temp->next;

    }
    cout<<endl;
}

int main(){
    // created a new node 

Node* node1= new Node(10);

cout<<node1->data<<endl;
cout<<node1->next<<endl;


// Head pointed to node 1 
Node* head= node1;
Node* tail= node1;
print(head);


// inserting at head 
// u can do this too if u cwant to check head okay 
// insertAtHead(head,12);
// print(head);

// insertAtHead(head,15);
// print(head);



// inserting at tail 

insertAtTail(tail,12);
print(head);

insertAtTail(tail,22);
print(head);







}

// Pr ye toh ulta print ho rhi h list so what we should do now 

