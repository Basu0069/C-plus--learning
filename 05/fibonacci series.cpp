0,1,1,2,3,5,8,13,21

n = (n-1)+(n-2)

#include<iostream>
 using namespace std;

 int main(){
    int n =10;
    int a=0;
    int b=1;
    cout<<a <<" " <<b<<" ";
    for(int i=1; i<=n;i++){

        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
 }
  




//   CHECK if a number is prime or not 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" enter the value of n" <<endl;
    cin>>n;

    bool isPrime =1;

    for(int i =2;i<n;i++){
        if(n%i ==0){
            isPrime=0;
            break;
        }
    }

    if(isPrime ==0){
        cout<<" Not a Prime Number"<<endl;
    }
    else{
        cout<<"is a Prime Number"<<endl;
    }
}



