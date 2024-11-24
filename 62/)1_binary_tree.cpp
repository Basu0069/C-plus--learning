// CREATION OF BINARY TREE 

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left = NULL;
        this->right = NULL;
    }
};





node* buildTree(node* root){

    cout<< "Enter the data: "<<endl;
    int data;
    cin>> data;
    // constructor called here 
    root = new node(data);


    if(data == -1){
        return NULL;
    }


    // AB  mei kuch root ke left mei dalna chahta hu ok 

    cout<<"ENter data for inserting in left "<< endl;
    // recussion for left 
    root->left = buildTree(root->left);
    // recursion for right
    cout<<"ENter data for inserting in right"<< endl;
    root->right = buildTree(root->right);
    return root;

}


void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();


     if(temp == NULL){ // purana level complete traverse ho chuka hai 
        cout << endl;
        if(!q.empty()){ // queue still has some child nodes
            q.push(NULL);
        }
     }


     else{
        cout<< temp-> data << " ";
        if(temp -> left){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }
     }
        
    }
}

int main(){

    node* root = NULL;

    // creating a Tree;
    root= buildTree(root);
//  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //  level order
    cout<<"Printing the level order traversal ooutput "<< endl;
    levelOrderTraversal(root);

}