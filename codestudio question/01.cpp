Q1 Find unique  17:
https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1

// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

// You need to find and return that number which is unique in the array/list.

//  Note:
// Unique element is always present in the array/list according to the given condition.


ANSWER 

//  ek array h usmie ek no. 1 baar aata h 
//  aur 2 no. same 2 baar aate h 
// jo ek no. aarha h usko find kro 

//  XOr mie a XOR a = 0 
// 0 XOR a= a 

2,3,1,6,3,6,2
2 XOR 3 XOR 1 XOR 6 XOR 3 XOR 6 XOR 2 
0 XOR 0 XOR 0 XOR 1 = 1


int findUnique(int *arr, int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}


Q 1207  UNIQUE NUMBER OF OCCURENCE (leetcode)
GIven an array of intergers arr, return true if the number of occurence of each value in the array is unique or false otherwise 

{1,2,2,1,1,3}
1-3 
2-2
3-1
in no. ki occurence unique h toh true return krega okie 


eg- 
-3,0,1,-3,1,1,1,-3,10,0
-3 - 3
0-2
1-4
10-1

unique occrence h inki toh true return krega 

SOLUTION :
HW 













Q FIND DUPLICATES IN ARRAY:
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

// For example:

// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1



ANSWER:
// JO  2 baar duplicate aarha h array mei usko print kr do 

int findDuplicate(vector<int> &arr){

    int ans=0;
// XOR all elements of array 
    for(int i=0; i<arr.size();i++){
        ans= ans^arr[i];
    }
// XOR [1,n-1] kyunki fir last vala ek element ke sath xor ho jayega toh vo element khud bahar chle jayega 
    for(int i=1; i<arr.size();i++){
        ans= ans^i;
    }
    return ans;
}





Q You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.


https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1


ANSWER- 
 FIND common element 
  {1,2,3}
  {3,4}
  ans-3


//   vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//     vector<int> ans;// in neext video 

//     for(int i=0; i<n;i++){
//         int element = arr1[i];

//         for(int j=0; j<m;j++){

//             if(element < arr2[j])
//             break;

//             if(element == arr2[j]){
//                 ans.push_back(element);
//                 arr2[j] = -11221;
//                 break;
//             }
//         }
//     }

//     return ans;
// }
// // this code is not optimise so we hv to make it optimise 




2nd way- 


1,2,2,2,3,4
i=0


2,2,3,3

j=0 


  vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i=0, j=0;
    vector<int> ans;
    while(i<n && j<m){

        if(arr1[i]==arr2[j]){
            ans.push_back(arr1 [i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;



}





Q PAIR SUM 
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

// https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1


ANSWER
{1,2,3,4,5}
n=5
now u hv to make pair which sum = 5
ans- 1,4
2,3 
okie 









vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector< vector<int> ans;

    for(int i=0;i<arr.size();i++ ){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] + arr[j]==s){
                
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }

   sort(ans.begin(), ans.end());
   return ans; 
}


QUESTION 11 TRIPLET 
https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1

arr-1,2,3,4,5
k=12
ans- 5+4+3 

HW 



QUESTION Sort 
https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1


// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// hw 

0,2,2,1,0,1,1,0,2
ans-0,0,0,1,1,1,2,2,2
// do it yourself
 







Q arrange the array like this shown below 


// 0,1,1,0,0,1
// 0,0,0,1,1,1
// arr[i]==0
// i++
// arr[j]==1;
// j--;

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n){

    int left = 0, right = n-1;


    while(left < right){


        while(arr[left] ==0 && left <right){
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        // agar yha pohonch gye ho iska mtlb
        // arr[left]==1 and arr[right]==0
        if(left<right){
         swap(arr[left], arr[right]);
        left++;
        right--;
        }
    }
}


int main(){

    int arr[8]={1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);

    return 0;
}















