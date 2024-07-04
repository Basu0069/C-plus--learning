AND -& 
OR - |
NOT - ~
XOR - ^ 


#include<iostream>
using namespace std;

int main(){
    int a =4;
    int b=6;

    cout<<" a&b " << (a&b) <<endl;
    cout<<" a|b " << (a|b) <<endl;
    cout<<" ~a " << ~a <<endl;
    // ye pta kese aaya h dekh 
    phele toh 100 jo ki 4 h 
    usko likhege aise 00000000000000100
    fir isko ulta krege 111111111111111011 

    starting mei 1 represent ki number negative h 

    now we will do 1st compliment 0000000000000000100 
    then we will add 1 in it 
    nd then we will get 2's compliment which is 
    cout<<" a^b " << (a^b) <<endl;
}