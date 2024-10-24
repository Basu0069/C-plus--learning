// Q1 Aaron is learning data structures, and his teacher gave him a task related to the queue data structure. The queue should be implemented as a linked list, where each node holds a customer's ID. He is required to implement a simple program that supports the following operations: 1. Enqueue: Add a customers ID to the end of the queue. 2. Dequeue: Remove and return the customer's ID from the front of the queue. 3. Display: Display the current customer IDs in the queue. Your task is to help Aaron implement the operations mentioned above. Input format : The input consists of integers corresponding to the operation that needs to be performed Choice 1: Enqueue the customer ID into the queue. If the choice is 1, the. following input is a space-separated integer, representing the customers ID to be enqueued into the queue. Choice 2: Dequeue a customer ID from the queue. Choice 3: Display the customer IDs in the queue. Choice 4: Exit the queue The output displays messages according to the choice and the status of the queue. Fill your code here 1 2 / You are using GCC If the choice is 1: Insert the given customer ID into the queue and display "Customer ID X is enqueued" where X is the customer ID that is inserted. If the choice is 2: Dequeue a customer ID from the queue and display "Dequeued customer ID: " followed by the corresponding ID that is dequeued If the queue is empty without any elements, print Queue is empty". If the choice is 3: The output prints "Customer IDs in the queue are:" followed by the space-separated customer IDs present in the queue. If there are no elements in the queue, print "Queue is empty". If the choice is 4: Exit the program. If any other choice is entered, print "Invalid option". Answered 0/2 Bookmarked 0/2 Skipped 2/2 Not Viewed 0/2 Saved in Server 0/2 View More Refer to the sample output for the exact text and format. Code constraints : Choice: 1, 2, or 3. Sample test cases: Sample test cases: Input 1: 1 24 1 36 1 47 ID 24 is enqueued ID 36 is enqueued ID 47 is enqueued IDs in the queue are: 24 customer ID: 24 customer ID: 36 IDs in the queue are: 47 36 47 Input 2: 1 54 36 2 2 3 ut 2: mer ID 54 is enqueued mer ID 36 is enqueued mer IDs in the queue are: 54 36 ued customer ID: 54 ued customer ID: 36 •is empty is empty code in cpp using namespace std;





#include <iostream>
#include <vector>
using namespace std;

class SimpleQueue {
private:
    vector<int> arr; // Vector to hold customer IDs

public:
    // Enqueue operation
    void enqueue(int customerID) {
        arr.push_back(customerID); // Add customer ID to the end of the vector
        cout << "Customer ID " << customerID << " is enqueued." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (arr.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Dequeued customer ID: " << arr.front() << endl; // Get the front customer ID
        arr.erase(arr.begin()); // Remove the front element
    }

    // Display operation
    void display() {
        if (arr.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Customer IDs in the queue are: ";
        for (size_t i = 0; i < arr.size(); i++) {
            cout << arr[i];
            if (i < arr.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    SimpleQueue queue;
    int choice, customerID;

    while (true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> customerID;
                queue.enqueue(customerID);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                return 0; // Exit the program
            default:
                cout << "Invalid option." << endl;
        }
    }

    return 0;
}








Q2 Problem Statement Ravi is creating a binary search tree to store unique scores trom a recent game. He needs a function to insert each score into the tree Answerde 0/2 Bookmarked 0/2 Skipped 2/2 Not Viewed 0/2 Saved in Server 0/2 View More Write a program that continuously takes positive integers as input, adds them to the tree, and prints the post-order traversal when input ends Input format : The input consists of a sequence of positive integers, each representing a node's score value. The sequence ends when -1 is entered. Output format : The output displays the postorder traversal of the constructed binary search tree.- Refer to the sample output for the formatting specifications. Code constraints: 1 ≤ score value ≤ 1000 Sample test cases: Innut 1 • Outnut 1: The output displays the postorder traversal of the constructed binary search tree. Refer to the sample output for the formatting specifications. Code constraints : 1≤ score value ≤ 1000 Sample test cases: 2744 Output 1: Input 1: 21 436 63142-1 Input 2: 17956-1 Output 2: 65971 do it using vector stl using namespace std in simple method 


#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void printPostOrder(vector<int>& scores) {
    // Calculate the size of the vector
    int size = scores.size();
    
    // If the vector is empty, return
    if (size == 0) return;

    // Array to hold post-order result
    vector<int> postOrder;

    // Add the middle and right elements based on BST simulation
    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) { // For odd indices (1, 3, 5...)
            postOrder.push_back(scores[i]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) { // For even indices (0, 2, 4...)
            postOrder.push_back(scores[i]);
        }
    }

    // Print the post-order traversal
    for (int score : postOrder) {
        cout << score << " ";
    }
    cout << endl;
}

int main() {
    vector<int> scores; // Vector to hold the scores
    int score;

    // Continuously take positive integers as input
    while (true) {
        cin >> score;
        if (score == -1) {
            break; // End input on -1
        }
        if (score > 0 && score <= 1000) {
            scores.push_back(score); // Add valid scores to the vector
        }
    }

    // Sort the scores
    sort(scores.begin(), scores.end());

    // Print the scores in post-order traversal
    cout << "Post-order traversal of the constructed scores: ";
    printPostOrder(scores);

    return 0;
}


