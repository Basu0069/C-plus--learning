// Binary Search

// linear search- one by one block search krta h ye 

FOR BINARY SEARCH- The elements should be in monotonic function 

3,5,9,13,27 

1)FInd mid 
2) compare mid/key 
3) if = then return index 

!= part search 



eg--
0,1,2,3,4,5 
3,7,11,13,19,27 

key = 27 
now mid = start+end/2 = 0+5/2= 5/2=2 

27>11 h toh right side mei dundega okie 
13, 19, 27 

mid=(3+5)/2=8/2=4 
now 19 !=27
27>19 


5
27 
mid=(s+e)/2= 
(5+5)/2=5

now 27==27 
true 
return 5;




Q search elemetn 
0,1,2,3,4 
4,8,16,22,34 
key = 4
find index 

sol- mid(0+4)/2=4/2=2 
16!=4; 
4<16 


4,8 
mid=0+1/2=0;

4==4 
true 
return 0;




Q  0,1,2,3,4,5
 5,11,13,17,19,27
KEY=25;

answer: 
mid=(s+e/2)=(0+5)/2=5/2= 2 

13!=25;

25>13 

we will go right side part 

17,19, 27 
mid=3+5/2=8/2=4 

19!=25 

25>19 

27 
mid=5+5/2 = 5 
27!=25 
25<27 
return -1 
not found 





CODE :
 
