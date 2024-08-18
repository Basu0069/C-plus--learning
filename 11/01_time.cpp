// TIME COMPLEXITY 
 

 3 types of notation 
 BIG O notation -> upper bound - worst case 
 THeta -> for avg case complexity- average case 
 Omega -> lower bound - best case 



 1)CONSTANT Time - > O(1)---- iska mtlb h ki jes loop chalaya h 
 for(i=0-> 10 tk){
    cout<<"HEllo";
 }

2) Linear time - > O(n)
same loop chlaya h n tk is baar 

3) Logarithmic time -> O(logn)----BInary search eg h iska 

4) Quadratic time-> O(n2)---- 2 baar loop chla diye toh ye hoga 
for(1-n)
For(1-n)

5)Cubic time-> O(n3)----3 baar loop chla diya 

// SEE PICTURES


QUESTIONS 
// we will ignore smaller degree 
1)f(X)-> 2n2 +3n  = O(n(sqr2))
2)f(x)-> 4n2 +3n3 = O(n(four))
3)f(X)-> N(sqr2)+ LogN=O(N2)



QUESTION: 
WHAT IS THE TIME COMPLEXITY 
int a =0,b=0;
for(i=0;i<N;i++)

for(i=0;i<M;i++)


//  JAB BAHAR EK LOOP HO TB + lgaoge 
// JAB ANDAR HO TB * lgaoge okie 


answer-> COMplexity of first loop= O(n)
COMPLEXITY OF SECOND LOOP= O(m)
FINAL ANSWER= O(n+m);

Q - for(0-n){
    for(O-n)
}

for(O-N)

answer-> O(N*N)+O(N)=O(N2)+O(N)






// STUCK IN TLE 
10^8 Operation RUle 
                       TIME COMPLEXITY 
<_ [10..11]           0(n!) 0(n^6)
<[15..18]             0(2^n *n^2)
<100                  0(n^4)
<400                  0(n^3)
<2000                 0(n^2*logn)
<10^4                 0(n^2)
<10^6                 0(nlogn)
<10^8                 0(n),0(log n)



