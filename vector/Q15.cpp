doubt in this question 
first take element and then check if the array is in bubblesort form or selection sort form and then rearange the array in the increasing order ok 


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

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sort the vector
    sort(v.begin(), v.end());

    // Check the sort type
    bool isBubbleSort = true;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            isBubbleSort = false;
            break;
        }
    }

    if (isBubbleSort) {
        cout << "Using Bubble Sort" << endl;
    } else {
        cout << "Using Selection Sort" << endl;
    }

    // Print sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


input: 6
64 78 85 92 99 73 


output:
64 78 85 92 99 73 
Using Bubble Sort
64 73 78 85 92 99 