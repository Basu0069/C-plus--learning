#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a; 
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element); 
    }

    cout << "Elements in the first vector: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl; 

    int p;
    cin >> p;

    vector<int> b; 
    for (int i = 0; i < p; i++) {
        int element;
        cin >> element;
        b.push_back(element); 
    }

    cout << "Elements in the second vector: ";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl; 


a.insert(a.end(),b.begin(),b.end());

sort(a.begin(),a.end());

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl; 




    return 0; 
}