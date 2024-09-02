SELECTION SORT 

arr[]= 1,7,9,2,3,0
sorted =  0,1,2,3,7,9 


 
 eg- 
 arr[]= 0,1,2,3,4
        64,25,12,22,11 


ROUND1: 64, 25,12,22,11 
sabse phele i=0 hua 
ab first element uthaya aur usko sbke sath check kiya aur smallest element find kiya aur usko sath swap kiya okie 

ans aaya 11, 25,12,22,64 

ROUND2-  ab i=1 h 
ab is index pe min value dundo 
aur swap 
11,25,12,22,64

round 3- 
11,12,25,22,64 
round 4- 
11,12,22,25,64 

TOTAL ROUND = n-1;
 

QUESTION from naukri 
https://www.naukri.com/code360/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2

void selectionSort(vector<int>& arr, int n){

    for(int i=0;i<n-1;i++){
        int minIndex = i;

    for(int j=i+1;j<n;j++){
        
        if(arr[j] < arr[minIndex])
        minIndex= j;

    }
    swap(arr[minIndex], arr[i]);
    }
}


// SPace complexity: O(1)

// Time Complexity: 
a, b,c,d,e 
ye tera 1+2+3 --- (n-2)+(n-1) tk chlega 
= n(n-1)/2= n^2-n/2 

complexity - O(n^2)

 

 BEST CASE- > alr sorted -- O(n^2)

 WORst case- > O(n^2)




 USE WHEN- 
 array ka size small hoga ok use selection sort 

//   ok 


