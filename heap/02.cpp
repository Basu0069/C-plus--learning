#include <iostream>
#include <vector>
#include <algorithm>  // For heap operations

using namespace std;

int main() {
    // Initialize a vector of integers
    vector<int> v = {10, 20, 15, 30, 40};

    // Convert the vector into a max-heap
    make_heap(v.begin(), v.end());
    cout << "Max-Heap after make_heap: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Add a new element (50) to the heap and maintain the heap property
    v.push_back(50);
    push_heap(v.begin(), v.end());
    cout << "Max-Heap after push_heap: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Remove the top element (max element in max-heap) and maintain the heap property
    pop_heap(v.begin(), v.end());
    v.pop_back();
    cout << "Max-Heap after pop_heap: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Sort the heap into a sorted range
    sort_heap(v.begin(), v.end());
    cout << "Sorted heap: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Check if the vector is a heap
    if (is_heap(v.begin(), v.end())) {
        cout << "The vector is a valid heap." << endl;
    } else {
        cout << "The vector is NOT a valid heap." << endl;
    }

    // Find where the heap property is violated (if any)
    auto it = is_heap_until(v.begin(), v.end());
    if (it != v.end()) {
        cout << "Heap property violated at element: " << *it << endl;
    } else {
        cout << "Heap property holds for all elements." << endl;
    }

    return 0;
}
