
#include<iostream>
using namespace std;

int main(){
    // pow(a,b)

    int a, b;

    cin>> a >> b;

    int ans =1;

    for(int i =1;i<=b;i++){
        ans = ans * a;
    }

    cout<<" answer is " << ans <<endl;



    int c, d;

    cin>> c >> d;

     ans =1;

    for(int i =1;i<=d;i++){
        ans = ans * c;
    }

    cout<<" answer is " << ans <<endl;

    return 0;
}

 

//  WITH USING FUNCTION 

#include<iostream>
using namespace std;

int power(int a, int b){// int num1, int num2 u can also write doesnt matter

    int ans = 1;

    for(int i =1;i<=b;i++){
        ans = ans * a;
    }

    return ans; 
}

int main(){

    int a, b;
    cin>> a>> b;

    int answer = power(a,b);
    cout << "answer is " <<answer <<endl;
    return 0;
}







// Number is even or odd 
#include<iostream>
using namespace std;

// 1-> Even 
// 0-> Odd

bool isEven(int a){
    // odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int num;
    cin>> num;

    if(isEven(num)){
        cout <<"Number is Even" <<endl;
    }
    else{
        cout<<"NUmber is Odd" <<endl;
    }

    return 0;
}
 


//  nCr PROGRAM 
nCr = n!/r!*(n-r)!
// FORMULA

8C2 =8!/2!*(8-2)!
=8!/2!*6!
=8*7/2
=28 




#include<iostream>
using namespace std;


int factorial(int n){

    int fact =1;

    for(int i= 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n,int r){

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return  num/denom;

}

int main( ){
    int n,r;

    cin >>n >> r;

    cout<< "Answer is "<< nCr(n,r) <<endl;


    return 0;
}




// PRINTING COUNTING 
// void means nothing 
// when function return nothing 



#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i =1; i<=n;i++){
        cout<< i << " ";
    }
    cout<<endl;
}

int main{

    int n;
    cin >>n;

    printCounting(n);


    return 0;
}


// PRIME NO. 
#include<iostream>
using namespace std;

bool  isPrime(int n){

    for(int i =2; i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
}


int main(){



    return 0;
}
// 58:15