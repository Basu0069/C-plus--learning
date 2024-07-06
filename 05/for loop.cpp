#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" enter the value of n" <<endl;
    cin>>n;

    cout<<"printing count from 1 to n" <<endl;

    for(int i=1; i<=n;i++){
        cout<< i <<endl;
    }
}
  

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n" <<endl;
    cout<<"printing count from 1 to n"<<endl;

    for(int a=0,b=1,c=2;a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<<a <<" "<< b << " "<<c << endl;
    }

}




// QUESTION to find the sum of all numbers 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<" enter the value of n " <<endl;
    cin>>n;

    int sum=0;

    for(int i=1; i<=n;i++){
        // sum =sum +1;
        sum+= i;
    }

    cout<< sum <<endl;
    
}




 
 
