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
    // phele toh 100 jo ki 4 h 
    // usko likhege aise 00000000000000100
    // fir isko ulta krege 111111111111111011 

    // starting mei 1 represent ki number negative h 

    // now we will do 1st compliment 0000000000000000100 
    // then we will add 1 in it 
    // nd then we will get 2's compliment which is 
    // 000000000101  whi is negative 5 okie 
    cout<<" a^b " << (a^b) <<endl;
}



// LEFT SHIFT 
eg - 5<<1  iska left shift krdo 

jaise 000000000000101 
h toh iska ek baar left shift krdo 
000000000001010  which is 10 

eg2- 3<<2
iska mtlb h hr bit ko 2 baar aage bdana h oki

0000000000000000011
2 baar shift krna h okie 
00000000001100
iska mtlb hua 12 answer okie 

AB AATE H RIGHT SHIFT PE 

15>>1



jaise 5>>2 
isko 2 bit aage le jana h mtlb toh dekh 

0000000000000000101 

0000000000000001


POSITIVE mei 
padding with 0 hoti h 






negative mei  padding compiler dependednt hota h okie 




eg 17>>1     toh aise iska answer 8 
eg 17>>2     toh iska answer aayega 4 
19<<1        toh iska answer aayega 38 
21<<2        toh iska answer aayega 84 
 


 #include<iostream>
 using namespace std;

 int main(){
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;
 }


// operators 
i++   - post increment 
++i -   pre increment 

inka mtlb h ki dekh 

int i =4; 
int a = i++;
a ? i? 
a ki value hogi 4 aur i ki value hogi 5 


#include<iostream>
using namespace std;

int main(){

    int i=7;

    cout<< (++i) <<endl;
// 8
    cout<< (i++) <<endl;
// 8 ,  i=9
    cout<< (i--) <<endl;
// 9,  i=8
    cout<< (--i) <<endl;
    //  7 , i=7 
}





   