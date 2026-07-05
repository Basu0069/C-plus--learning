// LIFO follws here stack = plates 
//  operations push, pop, peek ,empty,  peek mtlb upr se dekha i.e top elemetn 
 
#include<iostream>
#include<stack>
using namespace std;


int main(){

    // creation fo stack 
    stack<int> s;

    // push 
    s.push(2);
    s.push(4);


    // pop
    s.pop();

    cout<<"Printing top element "<< s.top() <<endl;

    if(s.empty()){
        cout <<"Stack is empty" <<endl;
    }
    else{
        cout<< "Stack is not empty "<< endl;

    }

    cout<<" size of stack is: " <<s.size()<<endl;
    return 0; 

}