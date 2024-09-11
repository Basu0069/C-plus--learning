#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l ;
    //  ek list bnayei hamne l naam se 

    list<int> n(5,100);// 5 elements rakhu aur 100 elements sbko intialize 
cout<<"Printing n "<<endl;
for(int i:n){
    cout<<i<<" ";
}cout<<endl;


    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //  aur tera begin, end, empty,back ye sb phele pd liya h okie 
    // l.erase aapka ek ek element delete krta rhega okie 
l.erase(l.begin());
cout<<"after erase"<<endl;
for(int i:l){
    cout<<i<<" ";
}

cout<<"Size of list "<<l.size()<<endl;
}