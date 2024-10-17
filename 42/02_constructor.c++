#include<iostream>
using namespace std;

class Hero{


    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"COnstructor called "<<endl;
    }


    void print(){
        cout<< level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){


cout<<"HI"<<endl;
// object created successfully 

Hero ramesh;
cout<<"hellow"<<endl;
//  ye likhne ke baad tera upr vala jo function tha na hero vala vo apne aap hi call ho gya jaisa bola yha okie 

// jab bi object ko create kr reh ho toh  constructor call hota h always 
// ye object creation ke time pe evoke hota h 
// iska no return type aur no input   parameter hota h okie 

// ramesh.Hero() ye cheez apne aap hi ban gyi h teri k7okie 
// default constuctor hotah ye 


// Dynamically 
Hero *h = new Hero;

//  hamne abi tk bina paramter ka default constructor bna diya h okie 



}