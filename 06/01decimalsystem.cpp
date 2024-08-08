// decimal sytem kese nikalte h 
1) n=10 
divide by 2 
then store reminder in answer 
repeat above 2 step while n = 0 
reverse answer 



n= 10 
divison and reminder 
10/2 - 5       0 
5/2 -> 2       1 
1/2 -> 1       0 
1/2 -> 0       1 

answer aaya 0101 
but hamra 10 ke liye answer aana chaiye 1010 
so u hv ot reverse this number 
1010 answer 


2) n=7 

divison        reminder 
7/2->3         1 
3/2-> 1        1 
1/2-> 0        1 
rukjao 
111 
111 reverse answer 


iska mtlb h ki 
111 --- 2ki power 2 + 2 ki power 1 + 2 ki power 0 
= 7 aayega 



2nd LOGIC 
n=5 

 we know agr ham kisi no. mei & kr rhe h aur agr uska answer 1 aaya toh odd number hua vo aur agar 0 aaya toh even hoga vo 


 ab jaise dekh hame pta h ki 5 ka binary value h 
 xxx ok 
 & 1 krege toh x=1 ke sath answer 1 aayega aur x = 0 ke sath answer 0 aayega 



   n=5 
   n!=0 tb tk kro 
   bit hame aise pta chl jayegi 
   bit = n&1 krke ok  

   ab hame 
   xxx ismei se last x ki value pta chl jayegi 
   ab hame right shift mar dena h isko ok 
   n=n>>1 
   ab thik h 
   aise right shift ka mtlb divide by 2 hi toh hota h ok 


   toh hamne kya bola ki jab tk n 0 ni h tb tk kuch kro 
   while(n!=0)
   {
    bit = n&1;
    n=n>>1;
   }
   answer 101 keses aaya dekh 
   phele 1 aaya 
   fir 01 
   fir total 101 bna smja 



   AB iska solution kese nilega dekh 
   answer = 0;
   answer = (10 ki power 0 * digit)+ answer 
   = 10(0) * 1+0 
   =1*1+0 = 1 


   AB agla 
   answer = (10 ki power 1 * digit)+ answer 
   (10 * 0)+1 
   0+1 = 1 


   ab teresa 
   answer =(10 ki power 2 *digit) + answer 
   =(100*1)+1
   =100+1=101 



   smja jese 1,2,3 h 
phele toh 123 hoga sath mei 
amswer= 0 hoaga pehele toh 

fir ab start hoga 
answer = digit *10(power 0 )+ answer 
=1*10(power 0)+answer 
=1


fir 
answer= digit *10(power 1)+ answer 
=2*10(1)+1
=21

answer = digit * 10(power 2)+ answer 
= 3*100 + 21 
=321 


FORMULA - (digit *10 ki power i)+answer 

// IS formulae se aap reverse nikal saakte ho mtlb okie 




NEW examplep 
1,2,3
answer = 0 


NOW 
answer = (answer *10)+digit
=(0*10)+1=1

answer = (answer *10)+digit
=(1*10)+2=12

answer = (answer *10)+digit
=(12*10)+3




// NOW WE WILL DO CODINg\
// number to binary code 
// error 
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n !=0 ){

        int bit = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n= n >> 1;
        i++;
    }

    cout<<" Answer is "<< ans << endl; 
}




// AB JASE 1,2,3 

same flow                         reverse flow 
ans= (ans*10)+digit              ans=0 
(0*10)+1=1                      ans = (1*10(power 0)+0)=1         
(1*10)+2=12                   ans =(2*10(1pow) +1)=21
(12*10)+3=123                 ans = (3*10(pow 2)+21)=321
                             formula - answ=(digit*10(pow i)+ans)


 
//  AGR number ki negative hua toh 
n= -6 


sbse phle negative ignore kr do 
fir uske 2's compliment nikalo 
jiske andar 1 compliment fir + 1 krna h 

ab jaise 6 h toh iska binary form ye h 
0000000000000110 
iska phele 1st compliment kro 
1's --> 111111111001 
ab plus 1 kr do 
111111111010 

phel starting mie 1 h toh phele toh negative aayeag 
ab iska 2nd compliment krege 
0000000101 
fir +1 
000000000000110 
aayega 6 
vo bi negative vala okie 



HW -- > negative no. to binary 
n=10







// NOW we will understand Binary to Decimal 
10101 
sb 2 ki power mei imagine kr ab 
2 ki pow 4
2 ki pow 2
2 ki pow 0 
=16+4+1
=21


CHECK kr rhe h 

DIVISION           REMINDER
21/2-10             1
10/2-5              0
5/2-2               1
2/2-1               0
1/2-0               1 

10101 answer aaya h 







eg 
jaise n =2 
h aur left shift mar diya 1 baar toh 
10 hoga ye vaise toh 
100 bn jayega jiska answer 4 hoga 
smja 

fir left shift maroge toh 1000 bn jayega jo ki 8 h 

AB iska code likhte h neeche 


// BINARY TO NUMBER 
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0, ans=0;

    while(n!= 0){
        int digit = n% 10;

        if(digit ==1){
            ans= ans + pow(2,i);
        }

        n=n/10;
        i++;
    }
    cout<< ans << endl;
}
 
