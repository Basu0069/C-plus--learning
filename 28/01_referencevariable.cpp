// Reference Variables:
int i=5;
int &j = i;


// pass by value mei copy create hoti h okei 


#include<iostream>
using namespace std;

int main(){

    int i=5;

    int & j = i;
    
    cout<< i << endl;
    i++;

    cout<< i << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;

    return 0;
}




#include<iostream>
using namespace std;

int & func(int a){
    int num = a;
    int & ans = num;
    return ans;
    // this is bad practising 
}

int* fun(int n){
    int* ptr = &n;
    return ptr;
}// ye bi bad practice h 



void update2(int& n){
    n++;
    // ye reference variable send kiya h hanne okiie 
}

void update(int n){
    n++;
}

int main(){

    int n=5;

    cout <<"Before " << n << endl;
    // update(n);
     update2(n);
    cout <<"After " << n << endl;
    return 0;

    fun(n);
    return 0;
    
}
 
