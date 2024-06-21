#include<iostream>
using namespace std;

int main(){

    cout << "Namaste Duniya " <<endl;

}


#include<iostream>
using namespace std;

int main(){

    cout << "Namaste Duniya " << '\n';

}


#include<iostream>
using namespace std;

int main(){

    cout << "Namaste Duniya mie love baabbar hu\n";

}

#include<iostream>
using namespace std;

int main(){

    cout << "Namaste Duniya mie love baabbar hu";
    cout << "\n";

}



//  ye upr meine sb trika likha h likhne ka bs 
// endl        ----new line or enter print kraene ka tarika h
// other way is thi 
// last mei" << '\n';       ye likh de tbi bhi ho jayega new line 







DATA TYPES & VARIABLES


#include<iostream>
using namespace std;

int main() {

    int a =123;

    cout << a <<endl;

    char b ='v';
    cout <<b <<endl;

    bool bl =true;
    cout<< bl <<endl;

    float f=1.2;
    cout<<f <<endl;

    double d=1.23;
    cout<<d <<endl;

    int size =sizeof(d);
    cout<<"Size of d is :"<< size <<endl;
}


// TYPECASTING KI H IDR OKIE
#include<iostream>
using namespace std;

int main(){

  int a='a';
  cout<< a <<endl;  

  char ch =98;
  cout <<ch <<endl;
}






// HOW negative numbers are stored 
FIrst bit 
agr positive h toh 0 hogi 
age negative h toh 1 hogi 


steps to follow for negative number
eg -5

first ignore the negative number 
convert into binart representation 
take 2's compliment and store 




jaise -5 h 
toh binary 101 
fir  0000000000000000000000101
aise hoga fir take compliment  and again take compliment  plus 1
1111111111111111111111010
+1
1111111111111111111011

NOW TO DISPLAY take 2nd compliment 
1111111111111111111111111011

take first compliment 
0000000000000000000000100
+1
0000000000000000000000000101
iski value h 5 
aur negative number no. h toh minus toh lg jayeag 




DEFAULT  
AGR TUM CHAHTE ho ki sirf postive number hi aaye toh 

Unsigned int =z  //aise likhne se aapki range bd gyi h ab aapke sirf positve number aayege 

#include<iostream>
using namespace std;

int main(){
 unsigned int a=122;
 cout << a <<endl;
}



//  OPERATORS

#include<iostream>
using namespace std;

int main(){
int a =2/5;
cout << a <<endl;
}


#include<iostream>
using namespace std;

int main(){
double a =2.0/5;
cout << a <<endl;
}


#include<iostream>
using namespace std;
int main(){
int a =2;
int b=3;

bool first = (a==b);
cout << first <<endl;

bool second = (a>b);
cout << second <<endl;

bool third = (a<b);
cout << third <<endl;

bool fourth = (a>=b);
cout << fourth <<endl;

bool fifth = (a<=b);
cout << fifth <<endl;

bool sixth = (a!=b);
cout << sixth <<endl;

}





