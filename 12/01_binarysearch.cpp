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
 
 #include<iostream>
 using namespace std;

 int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end=size -1;

    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        // go to right wala part 
        if(key > arr[mid]){
            start = mid + 1 ;
        }
        else{
            end = mid -1;
        }
        mid= start + (end-start)/2;
    }
    return -1;
 }



int main(){

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex = binarySearch(even, 6, 12);

    cout << "Index of 12 is "<< evenindex << endl;

    int oddindex = binarySearch(odd, 5, 8);

    cout<< " Index of 8 is " << oddindex << endl;
    return 0;
} 


// mid=(s+e)/2 
// u can write s+(e-s)/2 
this is another form of representation in order to remove the partiality of big numbers ;
 

// linear search meo 1000 values 
wost case -   1000 comparsions hoga 
complexity O(n);

Binary search mie 
1000 value h toh 
phele 500  fir 250 fir 125 fir 62 fir 31 fir 15 fir 7 fir 3 fir 1 fir 0 sirf 10 com
parison mei ho jayega sei b.s mei 
IDR complexity h O(log n)
  

  Binary searh mie 
  phel N fir N/2 size fir N/4 fir N/8 fir ---- N/2k 
  mtlb ki 
  N/2^k =1 
  N=2^k
  k=log N 
   
