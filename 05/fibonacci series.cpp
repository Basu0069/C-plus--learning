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
// ijijiji 
// huihohih
// joopok

 38:50  
