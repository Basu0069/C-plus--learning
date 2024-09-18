FIrst take the size of the array or vector and then put the value in it and then find me the second lrgest element in the given arraay ok 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }
    
    // Print the original vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Sort the vector
    sort(v.begin(), v.end());
    
    // Print the sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    int element=v.size();
    cout<<element<<endl;
    cout<<v.at(element-2)<<endl;
    
}


INput :
5
135 169 185 174 212


OUput :
135 169 185 174 212 
135 169 174 185 212 
5
185


