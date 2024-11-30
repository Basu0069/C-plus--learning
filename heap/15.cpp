#include <bits/stdc++.h>
using namespace std;

void heapSort(vector<int>& v) {
    int n = v.size();

    make_heap(v.begin(), v.end(), greater<int>());

    for (int i = n - 1; i >= 0; i--) {
        swap(v[0], v[i]);
        make_heap(v.begin(), v.begin() + i, greater<int>());
    }
}



int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    heapSort(v);

    cout << "Sorted Array: ";
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
