#include<iostream>
using namespace std;

// HOLD 

void printArray(int arr[], int size){

      cout << " printing the array " <<endl;

    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout <<" printing DONE " <<endl;
}

int main(){

    int number[15];

    cout << "Value at 15 index " << number[14] << endl;


    // initiallising the array 
    int second[3]={5,7,11};


     cout << "Value at 2 index " << second[2] << endl;




    int third[15]={2,7};

    printArray(third, 15);



    // intialising all locatuons with 0 
    int fourth[10] ={0};

  printArray(fourth, 10);



    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is "<< fourthsize <<endl;


    char ch[5] = {'a','b','c','d','e'};
    cout << ch[3] <<endl;

    // printArray(ch);// it will wont work cause ye vala array character liya h na toh function mei bi character hi input hoga okie 
     

    










    cout << endl << "Everything is Fine " << endl << endl;

    return 0;
}
