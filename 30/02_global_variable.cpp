#include<iostream>
using namespace std;


int score = 15;

void a(int& i){

    cout<< score <<" in a "<<endl;
    char ch = 'a';
    cout<<i << endl;
}

void b (int& i){
    cout << i << endl;
    cout << score <<"in b"<<endl;
}

int main(){
    cout<<score<<"in main" <<endl;
    int i=5;

    a(i);
    b(i);


    return 0;

}

// global variable ko koi bi change kr sakta h oki 
// this is bad practice
