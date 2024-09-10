// FUNTNCTIONS 
#include<iostream>
using namespace std;

void print(int *p){

    cout << *p << endl;
}

void update(int *p){

    // p= p+1;
    //couit << "inside" << p << endl;
     *p =*p+1;
}

int getSum(int *arr, int n){
    cout <<endl << "SIze : "<<  sizeof(arr)<< endl;
    int sum = 0;
    for(int i=0; i<n;i++){
        sum += arr[i];
    }
    return sum;

} 

int main(){

    /* int value = 5;
    int *p= &value;

    // print(p);

    cout << "BEfore  "<< *p << endl;
    update(p);
    cout << "After  "<< *p << endl;

*/


    int arr[6] = { 1,2,3,4,5,8};

    cout << "Sum is " << getSum(arr+3,5) << endl;
    return 0;

}


FUNCTIONS:

main()          |         upadte

p 123 value h iski             p = 123 
before 123                    p = p+1 
after 123                     p =124 
 

// BENEFITS: 
 u can send array according to you and sum any of u choice with using pointers okie 
 mtlb half array u can use accrodig to u okie 
 jitna bi tuje aray lena h teri marzi msja okie 
 we hav done question above loook above. 
