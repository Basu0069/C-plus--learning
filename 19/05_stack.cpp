#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

// jo last dala h phele vo bahar aata g stack mei okie 
    cout<<"Top Element->" <<s.top()<<endl;
    s.pop();

    cout<<"Top ELement->"<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

}