#include<iostream>
using namespace std;

int main(){

    int arr[10] = {23,122,41,67};

    cout<<" address of first memory block is " << arr << endl;
    cout << arr[0] <<endl;
    cout<<" address of first memory block is " << &arr[0] << endl;

    cout << "4th "<< *arr << endl;
    cout <<" 5th "<< *arr + 1 << endl;    
    cout <<" 6th "<< *(arr + 1) << endl;    
    cout <<" 7th "<< *(arr) + 1 << endl;    
    cout <<" 8th "<< arr[2] << endl;    
    cout <<" 9th "<< *(arr+2) << endl;    

}


// we got the formula that is 
arr[i] = *(arr+i)
or  
i[arr] = *(i+arr)


// DIfferenes POinters / array 

array create kiya h ek 
int arr[10] = 40 bytes ka h ye 

int *p = &arr[0] ye pointer bnaya h jo ki tera 8 byte ka h okie 

size operator in array - size* 4 hoga 
pointer mei - size = 8 bytes hoga always 

#include<iostream>
using namespace std;

int main(){

    int arr[10]= {23,122,41,67};

    int temp[10]= {1,2};
    cout << sizeof(temp) <<endl;
    cout << " 1st " << sizeof(*temp) << endl;
    cout << " 2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;


// we know size - 
arr-> no. of block *4 - print 
ptr- > 8 bytes 
    return 0;

}


2) & operator  
&arr[0]-> address of block at 0th index = 710 

int *p = &a[0] 
&p-> address of p vala block = 923 

#include<iostream>
using namespace std;
int main(){

    int a[20]= {1,2,3,5};
    cout << " -> "<< &a[0] << endl;
    cout<< &a <<endl;
    cout << a <<endl;


    int *p= &a[0];
    cout << p << endl;
    cout<< *p <<endl;
    cout << " -> "<< &p << endl;

    return 0;

}


3) Symbol table ka content cannnt be changed 

int arr[10];
arr= arr+1 it is error it cannot be changed 

int *p = &arr[0]
p = p+1 ho jayega in the case of pointer okie 


#include<iostream>
using namespace std;
int main(){

    int arr[10];

// arr= arr+1 ;
// Error 

int *ptr = &arr[0];
cout << ptr << endl;
ptr = ptr + 1;
cout << ptr << endl;
//  pointer mei na ye block aage chla jata h smja 
// 710 pda tha toh 714 ho gya 

}

 
