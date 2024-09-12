// pointers

int value = 5;
int *ptr = &value ;// is tra hamen pointer create kr diya h okie 
isse 2 cheeze pta chl rhi h 
1) kis type ka data h 
2) kitni byte ko consider krna h okie 


int i=5;
int * ptr=&i;
int ** ptr2 = &ptr;

iska mtlb h ki 
addess:        value:
i->710          5
ptr->820        710
ptr2->940       820

#include<iostream>
using namespace std;

int main(){

    int i=5;
    int *p =&i;
    int ** p2 = &p;

    cout<<endl << endl <<" Sab sahi chjl rha h "<< endl << endl;

    cout <<" printing p "<< p << endl;
    // cout <<" address of p  " << &p << endl;
    cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;


    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;


    cout<< &p <<endl;
    cout<< p2 <<endl;

    
    return 0 ;
}
 
