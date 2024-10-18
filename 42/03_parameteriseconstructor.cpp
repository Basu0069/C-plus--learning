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


    //Paramterised Constructor 
    Hero(int health){
        // cout<<"this->" <<this <<endl;
        this -> health = health;
    }


    Hero(int health, char level){
       this -> level= level;// jab ham this level bolte h tb vo object ki level ki baat krta h aur jab dusra level bolte h toh parameter ke level ki baat krte h 
        this -> health = health;
    }



//     // DEKH IMP CONCEPT 
//     jaise hamen ek object bnaya h  ramesh toh uski ek health ka box h okie 

//     aur ek tera aise randome health ka box pda h uske andar health h kie 

// Jp bi aapka current object hota ha(idr ramesh h ) na uska address this ke andar store hota h okie 

// MTLB this is a pointer jo ki point kr rha rha h aapke current object pe okei 

// toh aap ek random box ki health ko ramesh ki health ke andar dal rhe ho okie 
// this -> health= health aise hoga mtlbn okeoi 


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
// object created 
Hero ramesh(10);
// cout<<"Address of ramesh "<< &ramesh <<endl;
//  ramesh.getHealth();
ramesh.print();


// dynamically
Hero *h = new Hero;
h->print();


Hero temp(22,'B');
temp.print();

}