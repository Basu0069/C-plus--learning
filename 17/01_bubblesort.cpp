bubble sort 

10,1,7,6,14,9
10>1 then swap 

1,10,7,6,14,9
compare 10 >7 

1,7,10,6,14,9 
compare 10>6

1,7,6,10,14,9
compare 10<14 
then 

1,7,6,10,14,9 
compare 14>9 

1,7,6,10,9,14 
sorted 

then round 2 

1,7,6,10,9
1,6,7,10,9 
1,6,7,10,,9
1,6,7,9,10 
sorted 

then round 3 
---- 

har round ke sath hamara j kaam hote jaarhe h okie 
j - 
0- <n-1
0- < n-2
0- <n-3


last vaa part sorted ho jayega 


code studio question 
https://www.naukri.com/code360/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2

void bubbleSort(vector<int>& arr, int n){

    for(int i= 1;i<n;i++){
        // for round 1 to n-1
    bool swapped= false;
       for(int j=0;j<n-i;j++){
        // process element till n-i th index 
        if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped= true;
        }
       } 
       if(swapped == false){
        // alr sorted 
       break;
       }
    }
}