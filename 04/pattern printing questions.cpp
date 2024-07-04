Q1 1 2 3 4
   1 2 3 4 
   1 2 3 4

//  IMP baat agr ulta start krna h toh remember
//  n-j+1

#include <iostream>
    using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j; // agr tu idr kr de n-j+1   toh fir sara ka sar code ulta aayega reverse mei jaise 654321 is order mei okie.
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}



// NOw u hv to print this see

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;
    int count =1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count= count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}





// QUestion traingle pattern 
*
**
***
****

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;

    while(row<=n){

        int col =1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}



// You hv to print this 
1
22
333
4444


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;
    while(row <=n){
        int col =1;
        while(col<=row){
            cout<< row;
            col = col +1;
        }
        cout<<endl;
        row=row+1;
    }
}

// HW question 
1
2 3
4 5 6 
7 8 9 10 









NEXT QUESTION:
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;

    while(row<=n){

        int col =1;
        int value =row;
        while(col<=row){
            cout<<value;
            value =value+1;
            col=col +1;
        }
        cout<<endl;
        row=row+1;
    }
}

// another method would be without using int value so do it yourself 




NEXT QUESTIOn 
1
2 1 
3 2 1 
4 3 2 1 


ISMEI FORMULA LGEGA i-j+1 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i =1;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1);
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}



NEXT QUESTION
AAA 
BBB 
CCC 


// ISMEI BHI RELATION mil gya h jo ki h 
A+row-1
A+i-1


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;
    while(row <= n){
        int col =1;

        while(col <=n){
            char ch='A' + row -1;
            cout<<ch;
            col =col +1;
        }
        cout<<endl;
        row =row +1;
    }
}

 


 NEW QUESTION
 A B C 
 A B C 
 A B C 
 

 trick a+j-1 ye h realtion now do it yourself okie 





 NEXT QUESTION  HW 
 A B C 
 D E F 
 G H I 




NEXT QUESTION 
A B C 
B C D 
C D E 

ismei lgega  i+j-1  
 

 dekh ismei tuje A se  bhi match krwana h toh 

 i+j-1 =1  we alr know this 

 Add A'-1  (Taki A aajaye right side mei)

 i+j-1+A'-1 = 1+A'-1 
 A' +i+j-2 =A' 
 ye bn gya formula okiokee rememver this 


row =1 
while (row<=n)
{
    col =1 
    while(col <=n)
    {
        char ch = 'A' +i+j-2;
        cout <<ch 
        col =col +1;
    }
    cout<<endl;
    row =row+1;
}

dow it yourself 




NEXT QUESTION 
A 
B B 
C C C 


formula used  
'A' +row -1 


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;

    while(row<=n){
        int col =1;
        
        while(col <=row){
            char ch=('A'+row-1);
            cout<<ch;
            col =col +1;
        }
        cout<<endl;
        row =row +1;
    }
}

  
NEXT QUESTION 
A 
BC  
DEF 
GHIF 

do it urself 
A 
BC 
CDE 
DEFG 

formula use 
'A'+row+col-2 

bs fir hame pta h ki 
row jayegi 1-n 
col jaywga r-row 
A +row+col-2 fomula use hoga bs fir 


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;

    while(row<=n){
        int col =1;
        
        while(col <=row){
            char ch=('A'+row+col-2);
            cout<<ch;
            col =col +1;
        }
        cout<<endl;
        row =row +1;
    }
}


NEXT QUESTION 
D 
CD 
BCD 
ABCD 


ismei koi formula bn ni rha tha toh meine phel har row ka startin gcharacte nikalna okie 
A+n-i    this formula is for row 
fir baad mei increment hi toh krte rehna h bs 


 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int col =1;
        char start ='A' +n-row;
        while(col <=row){
            cout<< start;
            start=start +1;
            col =col+1;
        }
        cout<<endl;
        row=row+1;
    }
 }


 HOMEWORK QUESTION 

 ABC 
 BCD 
 CDE 


  NEXT QUESTION 
  ____*
  __**
  _***
  ****


  #include<iostream>
  using namespace std;

  int main (){

    int n;
    cin>>n;

    int row =1;

    while(row <=n){

        // space print karlo
        int space =n-row;
        while(space){
            cout<<" ";
            space =space -1;
        }

        // starts print karlo 
        int col =1;
        while(col <=row){
            cout<<"*";
            col = col +1;
        }
        cout<<endl;
        row=row+1;
    }
  }



  HW QUESTION 
  ****
  ***
  **
  *
  
  n-i+1   formula used here 
  n-i  stars print krne  





  HW QUESTION 
  ****
  _***
  __**
  ___*

  space  i-1 formula used  
  star n-i+1       formula used 



  HW question 
  1111
   222
     33
      4

    1
   22
  333 
 4444


1234
 234
  34 
   4 
    

    1
   23
  456
78910


___1 
__121 
_12321 
1234321


sbse phele space vala pattern bnayege 
n-i krege ok 

ab us traingle ki baari 1 1 2 vale 
toh 




#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row =1;

    while(row<=n){

        // Print karo  1st traingle space 

        int space = n-row;
        while(space){
            cout<<" ";
            space =space -1;
        }

        // Print 2nd triangle 
        int j=1;
        while(j<=row){
            cout<<j;
            j=j+1;
        }

        // Print 3rd triangle 
    int start = row-1;
    while(start){
        cout<<start;
        start=start-1;
    }

        cout<<endl;
        row=row+1;

    }
}



HW QUESTION 

1234554321
1234**4321
123****321
12******21
1********1
