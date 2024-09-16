Prasath is developing a program to manage sorted singly linked lists of sales data. The linked list should be kept sorted in ascending order. The task is to insert a new data point into the sorted linked list and display the list before and after insertion.



Help Prasath in creating the program.



Company Tags: Capgemini

Input format :
The first line of input contains an integer n, the number of initial data points to be inserted into the linked list.

The second line contains n integers, which are the initial data points.

The third line contains a single integer data, the new data point to be inserted into the linked list.

Output format :
The first line of output prints "Original data points:" followed by the linked list elements before the insertion of the new data point.

The second line prints "Updated data points:" followed by the linked list elements after the insertion of the new data point.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 25

1 ≤ initial data points, data ≤ 100

Sample test cases :
Input 1 :
6
25 36 47 58 69 80
19
Output 1 :
Original data points: 25 36 47 58 69 80 
Updated data points: 19 25 36 47 58 69 80 
Input 2 :
2
50 100 
75
Output 2 :
Original data points: 50 100 
Updated data points: 50 75 100



code: 


sort(v.begin(),v.end()); // very important okie 




// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0;i<n;i++){
        int element;
        cin>> element;
        v.push_back(element);
    }
    
    cout<<"Original data points: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    int m;
    cin>>m;
    
    v.push_back(m);
    
    sort(v.begin(),v.end());
    
    
    cout<<"Updated data points: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}





#include <iostream>
#include <vector>
#include <algorithm> // For std::lower_bound

using namespace std;

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

