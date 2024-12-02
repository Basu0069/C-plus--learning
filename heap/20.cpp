// If u have to remove the particular element from the heapa using swap technique #include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element);
        make_heap(v.begin(), v.end());  // Maintain heap property after each insertion
    }

    // Display the heap before removing an element
    cout << "Heap before removing an element: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Let's say you want to remove a specific element from the heap
    int elementToRemove;
    cout << "Enter the element you want to remove: ";
    cin >> elementToRemove;

    // Try to find the element and remove it using the swap method
    bool found = false;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == elementToRemove) {
            // Swap with the last element in the heap
            swap(v[i], v.back());
            // Remove the last element
            v.pop_back();
            // Re-heapify the heap to restore heap property
            make_heap(v.begin(), v.end());
            found = true;
            break;  // Exit the loop after removing the element
        }
    }

    if (!found) {
        cout << "Element not found in the heap!" << endl;
    }

    // Display the heap after removing the element
    cout << "Heap after removing the element: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

