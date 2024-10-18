#include<bits/stdc++.h>
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
    // Hero(Hero& temp){
    //     cout<<"Copy constructor called"<<endl;

    //     this->health = temp.health;
    //     this->level= temp.level;

    // }


    void print(){
        cout<<endl;
        cout<<"Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health << " ,";
        cout<<"level:" <<this->level << endl;
        cout<<endl;
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

  Hero hero1;

  hero1.setHealth(12);
  hero1.setLevel('D');
  char name[7] = "Babbar";
  hero1.setName(name);


  hero1.print();


    // use default copy constructor 
    Hero hero2(hero1);
    hero2.print();
//    Hero hero2 = hero1;

    hero1.name[0]= 'G';
    hero1.print();

   hero2.print(); // iska name gabaar ho hgya ab 
//    shallow copy hui h idr mtlb
// aapne same memory ho hi acces kr rhe ho aap memory vhi h... 
//  deep cooy mei iski ek new copy bn jati h 

}
// 1.06
