 //  Question 
    MAXIMUM & MINIMUM IN A ARRAY:
#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }

    return min;
}

int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    return max;
}

int main(){

    int size;
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}



//   REVERSING OF AN ARRAY 
//  2,3,4,5,9
//  9,3,4,5,2
//  9,5,4,3,2
//  9,5,4,3,2
// swaping here 


#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int arr[6]= {1,4,8,5,-2,15};
    int brr[5]= { 2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}


// QUESTIONS
// {1,2,3,4,5,6}
// {2,1,4,3,6,5}

// Q find unique 
// Q find duplicate 
// Q array - {1,2,3,4}
// {2,4,6,8}
// ={2,4} answer 


// Q PAir sum 
// Q Triplet sum 
// Q sort 0's and 1's 
