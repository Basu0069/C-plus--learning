// object - entity - state/properties & behaviour 


#include<iostream>
using namespace std;

class Hero{

    // properties
    private:
    int health;

    public:
    char level;

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

// static allocation 
Hero a;
cout <<" level is "<< a.level << endl;
cout <<<" health is "<< a.getHealth() << endl; // health tera private member h toh use gethealth okie samka 

// Dynamic 
Hero *b = new Hero;
cout <<" level is "<< (*b).level << endl;
cout <<<" health is "<< (*b).getHealth() << endl; // health tera private member h toh use gethealth okie samka 



// creation of object
Hero ramesh;
cout << "Size of Ramesh is "<< sizeof(ramesh) <<endl;

cout<<" Ramesh health is "<< ramesh.getHealth()<< endl;

// use setter 
ramesh.setHealth(70);

// ramesh.health = 70;
ramesh.level='A';

cout <<"health is: "<< ramesh.getHealth()<< endl;
cout <<"Level is: "<< ramesh.level << endl;

// cout<<"size :"<< sizeof(h1)<<endl;


return 0;

}




// Access Modifier-
public 
private 
protected 


32:51 stop 

















