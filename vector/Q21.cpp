Q take a size of input then put the double values in it and print oout hte first and last element in it 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<double> v; // Change to double
    
    for(int i = 0; i < n; i++){
        double element; // Change to double
        cin >> element;
        v.push_back(element);
    }
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Print the first element
    cout << "First element: " << v.front() << endl;
  
    
    // Print the last element
    cout << "Last element: " << v.back() << endl;
 
    
    return 0;
}

INPUT:
4
-3.2 0.5 -2.8 -1.9


OUTPUT:
-3.2 0.5 -2.8 -1.9 
-3.2 -2.8 -1.9 0.5 
First element: -3.2
Last element: 0.5

