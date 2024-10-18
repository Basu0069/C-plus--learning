#include<iostream>
using namespace std;

class Hero{


    private:
    int health;

    public:
    char level;
    char *name;

    Hero(){
        cout<<"Simple constructor called"<<endl;
        name= new char[100];

    }


    //Paramterised Constructor 
    Hero(int health){
        this -> health = health;
    }


    Hero(int health, char level){
       this -> level= level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;

        this->health = temp.health;
        this->level= temp.level;

    }


    void print(){
        cout<<"health"<<this->health << endl;
        cout<<"level"<<this->level << endl;

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


    void setName(char name[]){
        strcpy(this->name,name);
    }

};

int main(){

    Hero S(70,'C');
    S.print();


// Copy constructor 
    Hero R(S);
    R.print();

    // R.health= suresh.health;
    // R.level= suresh.level;// basically ham na suresh ki values r mei dalna chahte h okie 



}