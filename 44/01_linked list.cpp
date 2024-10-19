#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
    
//   constructor
    Node(int data){
        this->data=data;
        this-> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){

    // new node create

    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){
    // new node create

    Node* temp = new Node(d);
    tail-> next = temp;
    tail = tail -> next;
    
}
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp-> data <<" ";
        temp= temp -> next;
    }
    cout<< endl;
}


int main(){
// Created a new node

    Node* node1= new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    // head  pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);


    insertAtTail(tail, 12);

    print(head);


    insertAtTail(tail, 15);

    print(head);


// INSERT AT HEAD
//  pr abi ismei aise output aarha h dekh 
//  tuje bs insertathead vala fucntion start krna h aur andar head ki value deni h bs fir tera ye function start ho jayeag 
// 10 20 30 
// the output is - 30 20 10 this one 






// INSERT AT TAIL
// AB sahi aarha h phele 10 fir 12 fir 15 
// yaani 10 12 15 
//  tuje bs insertattail vala fucntion start krna h aur andar tail ki value deni h bs fir tera ye function start ho jayeag 
}
