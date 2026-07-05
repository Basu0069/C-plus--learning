#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // properties 
    int *arr;
    int top;
    int size;


    // behaviour 
    Stack(int size){
        this->size = size ;
        arr = new int[size];
        top= -1;

    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"Stack Overflow" <<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<< "Stack underflow"<< endl;
        }

        


    }

    void peek(){

    }

    bool isEmpty(){

    }

};

 


int main(){



    return 0;
}