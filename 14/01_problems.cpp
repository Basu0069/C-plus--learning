 Q find pivot(graph ki minimum value) in an array 

 ip-> {1,2,3,7,9}-> sorted 
 {7,9,1,2,3}-> rotated 


 o/p pivot?

 7,9,1,2,3 iska graph nb pe bna le 
arr[mid]>= arr[0] --- 1st line 

else 
e= arr[mid]
 agr ham e=mid -1 kr dete toh vo first vali line mei chle jata firse 
 see ss;
  


//   CODE FOR IT 
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s=0;
    int e= n-1;
    int mid = s+ (e-s)/2;

    while(s<e){

        if(arr[mid]>= arr[0]){
            s= mid +1;
        }
        else{
            e=mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}

int main(){

    int arr[5]={3,8,10,17,1};
// iska andswer 4 aana chaiye cuz 1 ka index 4 h 

    cout <<"Pivot is "<< getPivot(arr, 5)<< endl;
}


// 0,1,2,3,4 
  3,8,10,17,1 


  first mid = 2 
  check arr[mid] >= arr[0]
  10>=3 --which is trure 
  s= mid+1 

  ab bacha 
  3,4 
  17,1 

  mid = 3 
  check kiya ki 17>=3 ---which is true 

  4
  1 
  mid = 4 
  check 1>=3 --> which is false 
  e=mid 
  s=4
  e=4 

  return s or e 


  Q2 Search in a roated array 
  https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2

  concept - >
  7,9,1,2,3 

  k=2 present h ya absent? 

  2 line bnegi graph mie 
  dono upr jar rhi h ss check 

  dekh phele toh ham pivot nikal lege ok 
  fir do side bn jayege ab hame binary sort lgana h toh kese lgaeye aur kidr 
  so first pivot then 
   if agr ismei lie krta h toh  arr[pivot]<= target <= arr[n-1];
binary sort lga jayega 2 line pe 

else binary search 1st line pe lga lo 

 ss check 

// NOW CODE 


int getPivot(vecotr<int>& arr, int n){

    int s=0;
    int e= n-1;
    int mid = s+ (e-s)/2;

    while(s<e){

        if(arr[mid]>= arr[0]){
            s= mid +1;
        }
        else{
            e=mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}


 int binarySearch(vecotr<int>& arr, int s,int e, int key){

    int start = s;
    int end=e;

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

int findPosition(vecotr<int>& arr, int n, int k){

    int pivot = getPivot(arr,n);
    if( k>=arr[pivot] && k<=arr[n-1])
    {// BS on second line 
        return binarySearch(arr, pivot,n-1,k);
    }
    else{
        // BS on first line 
        return binarySearch(arr, 0,pivot -1,k);
    }
}





Q FIND SQUARE ROOT USING BINARY SEARCH 
https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2


// ab jaise n=27 h toh 
iska answer 0-27 ke beech aayega na 

code: 

class Solution {
    public:

    long long int binarySearch(int n){

        int s=0;
        int e=n;
        long long int mid= s+(e-s)/2;

        int ans = -1;
        while(s<=e){

            long long int square= mid *mid;

            if(square == n)
            return mid;

            if(square < n){
                ans = mid;
                s= mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    } 

    int mySqrt(int x){
        return binarySearch(x);
    }
};
//  this code will work on website but what if u want acurate answer then ?

// code is written down 

#include<iostream>
using namespace std;
   long long int sqrtInteger(int n){

        int s=0;
        int e=n;
        long long int mid= s+(e-s)/2;

        int ans = -1;
        while(s<=e){

            long long int square= mid *mid;

            if(square == n)
            return mid;

            if(square < n){
                ans = mid;
                s= mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    } 


double morePrecision(int n, int precision, int tempSol){

    double factor =1;
    double ans = tempSol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        // 0.1
        // 0.01
        // 0.001
        for(double j=ans; j*j<n; j=j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<" enter the number" << endl;
    cin>>n;

    int tempSol= sqrtInteger(n);
    cout <<" ANswer is " << morePrecision(n, 3, tempSol) << endl;

        return 0;
}

// hua kya code mei vo dekhte h neeche 
// see lec 14 last part only 


