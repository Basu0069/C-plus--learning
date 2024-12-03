// Conditional pdege idr

// mtlb dekh ismei pta kesi chlta h condition aise
// if(a>0)
// {
//     print+ve 
// }
// else
// {
//     print(not +ve)
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<"value of n is :" << n <<endl;
}
//  issse input lete h smja 

#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    if(a>0){
        cout<<"A is Positive" << endl;
    }
    else{
        cout <<"A is negative" << endl;
    }
}


#include<iostream>
using namespace std;

int main(){

    int a,b;

    cin>> a >>  b;

    cout <<"Value of a and b is "<<a <<" "<< b <<endl;

}



#include<iostream>
using namespace std;

int main(){
    int a,b;

    a=cin.get();
    cout<<" value of a is : "<< a <<endl;
}

#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value of  a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    if(a>b) {
        cout<<"A is greater " <<endl;
    }
    if(b>a){
        cout<<"B is greater " <<endl;
    }
}
 

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive";
    }
    else{
        if(a<0){
            cout<<"A is negative";
        }
        else{
            cout<<"A is 0";
        }
    }
}

// WHat if u want to make so many choice then what will you do 
if  
else if 
else 
this you will do okie 

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a "<<endl;
    cin>>a;

    if(a>0){
        cout<<"A is positive";
    }
    else if(a<0){
        cout<<"A is negative"<< endl;
    }
    else{
        cout<<"A is 0"<<endl;
    }
}

// Question 
// jaise a-z tk lowercase h so u hv to print ki ye lowercase h 
// jaise A-Z tk h so u hv to print ki ye upper case h 
// jaise 0-9 h so u hv to print ki ye numeric h oke 





WHILE LOOP 
 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
 }



//  SUM OF N numbers 
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int sum =0;

    while(i<=n){
        sum=sum+i;
        i=i+1;
    }

    cout<<"Value of sum is "<<sum<<endl;
}
 
//  QUestion 
Find sum of all even no.
Farheit to celsius convert






Prime btana h ki no. prime h ya ni vo vala question kr
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int i=2;
    
    while(i<n){
        if(n%i==0){
            cout<<"IT is not prime"<<endl;
            break;
        }
        else{
            cout<<"IT is prime "<<endl;
            break;
        }
    i=i+1;
    
    }
}



// Pattern 
 