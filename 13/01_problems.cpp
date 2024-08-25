

concept - 
0,1,2,3,4
1,2,3,3,5 
key =3 
 

 mid=(s+e)/2 = (0+4)/2 =2 
 3==3 
 ab iska index store kr lo 2 






sorted array - search - O(logn)
// code for understading first 

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n,int key){

    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]== key){
            ans = mid;
            e= mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid -1;
        }

        mid = s +(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n,int key){

    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s= mid+1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid -1;
        }

        mid = s +(e-s)/2;
    }
    return ans;
}


int main(){

    int even[11]={1,2,3,3,3,3,3,3,3,3,5};

    cout <<" First occurence of 3 is at index  " << firstOcc(even,11,3) <<endl;
    cout <<" Last occurence of 3 is at index "<< lastOcc(even, 11 ,3)<<endl;


    return 0;
}


// DRy run 
0,1,2,3,4,5,6
1,2,3,3,3,3,5 

mid = (s+e)/2 = (0+6)/2 = 3 
key = 3 
3==3 
store-> ans = mid 
part decide konse part mei jaoge obv right mie jaoge 
s = mid+1; 



If key > arr[mid]
right part mei jaoge 
s=mid+1;


If key < arr[mid]
left part mei jaoge 
e=mid -1;










// CODE STUDIO QUESTION 
Q first and last posttion of ana element in sorted array 


https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2
answer


int firstOcc(vector<int>& arr, int n,int key){

    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]== key){
            ans = mid;
            e= mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid -1;
        }

        mid = s +(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n,int key){

    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s= mid+1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid -1;
        }

        mid = s +(e-s)/2;
    }
    return ans;
}


// ab jaise 5,7 h toh tu indono ka pair bna sakta h jese 

// pair<int,int>p;
// p.first=5;
// p.second=7;


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   pair<int,int> p;
   p.first= firstOcc(arr,n,k);
   p.second = lastOcc(arr,n,k);

 
   return p;
}


 QUESTION 724 
 https://leetcode.com/problems/find-pivot-index/description/

 PEAK INDEX IN  A MOUNTAIN ARRAY 

 010 
 moutain peak 

 0,2,1,0  
 upr se neeche aarha h smja 

 ismei graph phele upr jata h fir neeche aata h toh 
 phele toh arr[i]<arr[i+1] h 
 fir arr[i-1]< arr[i]> arr[i] hota h 
 fir arr[i]> arr[i+1] hota h okie 


 eg- 0,1,2,3 
 3,4,5,1 

 mid=(0+3)/2 = 1 
  
  if (arr[mid]< arr[mid+1])
  s=mid +1;




  QUESION KYA BOLTA H YE VO DEKHTE H NEECHE 
  
    0,1,2,3 
    3,4,5,1


    mid = (0+3)/2 =1 
    ab hamne dekhna h ki 4 jo h 
    kya 4<5 h ? is case mei s=mid+1 =1+1=2 


    ab bacha 
    2,3
    5,1 
    mid=2+3/2= 5/2 = 2 

    now u check ki 5<1 h 
    naa 
    e=mid 
    e=2 

2
5 
mid=(2+2)/2=2 
ho gya solve 
return s ;


 class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int s=0;
    int e=arr.size()-1;

    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]< arr[mid+1]){
            s=mid +1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    } 
    return s;
    }
};