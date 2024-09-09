// Pointers in cpp 


int num=5;
ek block bna aur uske andar h 5 ok 

 num ka address phele ka hoga kuch 





//  address ko store krna ka kaam pointer krta h oki 

int *ptr= &num;
iska mtlb h ki 


ek box pda h phele toh 
uske andar 5 value h aur uska address 100 h 

fir ek pointer bnaya p 
aur uske andar num ka address(100) dal diya h okie 


mtlb ki ab 5 ko ek toh p bi point kr rha h aur num bi 5 ko point kr rha h smja 
 
 char *ptr = &ch 
*p = value at address pointed by p 





// code 
 #include<iostream>
 using namespace std;

 int main(){

    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout<< "address of num is " << &num << endl;

    int *ptr= &num;

    cout<<"Address is :" << ptr << endl;
    cout<<"Value  is :" << *ptr << endl;

    double d = 4.3;
    double *p2= &d;
    cout<<"Address is: "<< p2 <<endl;
    cout<<"Value is: "<< *p2 <<endl;

    cout<<" size of integer is "<< sizeof(num) <<endl;
    cout<<" size of pointer is "<< sizeof(ptr) <<endl;
    cout<<" size of pointer is "<<sizeof(p2)<<endl;
    return 0;
 }



 #include<iostream>
 using namespace std;
 int main(){

    // int *p = 0;

    // cout<< *p<<endl;

    int i=5;
    // int *p = &i;
    int *p= 0;
    p = &i;

    cout<< p << endl;
    cout<< *p << endl;
    return 0;
 }


 #include<iostream>
 using namespace std;

 int main(){
    31:45
 }