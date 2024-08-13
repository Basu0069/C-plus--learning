Q7 Reverse integer 
fomula used - ans = ans*10 +digit 


class Solution {
public:
int reverse(int x){

    int ans =0;
    while(x !=0){

        int digit = x % 10;

        if( (ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }
        ans = (ans * 10)+ digit;
        x= x/10;
    }
    return ans;
}
};

// NOT USED 


QUESTION  1009 
COmpliment of base 10 integer 

 ismei h jese 
 n=5 h toh iska base 10 hoga 
 101 ab iska compliment krna h toh aaeyga 010 jo ki h 2 
 2 ans 

idr binary to decimal 
then decimal to binary hua h okie 

eg- 7--> 111
1's compliment --> 000 = 0 ans 



// NOW 
 5 ko aise likhte h 000000000101 
 `5 ko aise likhte h 11111111010 
 ab hame kuch aisa kran h ki 111111ignore krna h 

 ab ham ek mask bnayege jo ki h 000000000111  ye bna mask now we will & them 

 1111111111010 & 000000000000111 
 you will get 0000000000010 = 2 thats what u want 


 ~n ko & mask -> answer 
 thats the formula 
   


   ab jese phele 000000000101 h 
   ist right shift 00000000010 
   2nd right shift 00000000001 
   3rd right shift 00000000000 =0 
   tb tk krna h jab tk !=0 aaye samja 




   mask bnane ke kiye phele hamne 
   00000000000 kiya 
   fir hamne left shift kiya 
   aur 1 ke sath or kr diya 

toh aaya 00000000000001 
fir left shift kr diya aur 1 ke sath or kr diya 
00000000000000010
again 
0000000000011

jese 
0000
0001
0011
0110
0111
1110
1111



ANSWER
class Solution  {
public:
    int bitwiseComplement(int n){

        int m = n;
        int mask = 0;

        if(n == 0)
        return 1;

        while(m!=0){
            mask = (mask << 1) | 1;
            m= m >> 1;
        }

        int ans= (~n) & mask;
        return ans;
    }
};


Question 231 
POWER OF TWO 

take n= 2(power2)
agr koi no. h toh true otherwise false 

one option - aap isko mod se kr sakte ho like 14%=0 
16%2=0 

other option 
n=16 
toh divide by 2 krte jao jb k 1 na aajaye answer 


