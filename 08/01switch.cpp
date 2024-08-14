switch(expresiion){
    case const1:    

            break;
    case const2:


            break;
    default: 


}
// const = int/char 
const ke andar aap float aur string value ni dalsakte okie 




#include<iostream>
using namespace std;

int main() {

    int num =2;

    cout << endl;
    switch (num){

        case 1: cout<< "First" <<endl;
        break;

        case 2: cout<< "Second" <<endl;
        break;

        default: cout << "It is default case" <<endl;
    }

    cout << endl;
}




#include<iostream>
using namespace std;

int main() {

    char ch = '1';

    cout << endl;
    switch (ch){

        case 1: cout<< "First" <<endl;
        break;

        case '1': cout<< "Character one" <<endl;
        break;

        default: cout << "It is default case" <<endl;
    }

    cout << endl;

    return 0;
}




#include<iostream>
using namespace std;

int main() {

    char ch = '1';
    int num =1;

    cout << endl;
    switch (ch){

        case 1: cout<< "First" <<endl;
                cout << "First again " <<endl;
                break;

        case '1': switch(num) {
                case 1: cout<<"Value of num is "<< num <<endl;
                break;
            }
        break;

        default: cout << "It is default case" <<endl;
    }

    cout << endl;

    return 0;
}





COntinue -> skip iteration 
Switch ke andar continue is not valid 


// CALCULATOR 
#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout <<"ENter the value of a "<<endl;
    cin >> a;

    cout<<"Enter the value of b " <<endl;
    cin >>b;

    char op;
    cout<<"Enter the operation you want to perform" <<endl;
    cin>> op;

     switch(op){

        case '+': cout << (a+b) <<endl;
            break;

        case '-': cout<< (a-b) <<endl;
            break;

        case '*': cout<<(a*b) <<endl;
            break;

        case '/': cout <<(a/b) <<endl;
            break;
        
        case '%': cout <<(a%b) <<endl;
        break;

        default: cout << "Please enter a valid operation" <<endl;
     }



    return 0;

}

//  HW QUESTION 

1330 paise h so u hv to count the notes 
100 ke kitne lge 
20 ke kite lge 
10 ke kite lge 
50 ke kite note lge 
SOlve using switch 


 