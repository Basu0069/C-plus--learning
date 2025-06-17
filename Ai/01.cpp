#include <iostream>
#include <queue>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}
































void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Function to display the BST structure level by level
void displayBST(Node* root) {
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            Node* current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left) {
                q.push(current->left);
            }
            if (current->right) {
                q.push(current->right);
            }
        }
        cout << endl; // Move to the next level
    }
}

int main() {
    Node* root = nullptr;

    // Insert the given elements into the BST
    int elements[] = {8, 5, 2, 6, 4, 3, 9, 10, 7};
    for (int value : elements) {
        root = insert(root, value);
    }

    // Display the BST using in-order traversal
    cout << "In-order Traversal (Sorted Order): ";
    inOrderTraversal(root);
    cout << endl;

    // Display the BST level by level
    cout << "\nBST Structure (Level by Level):\n";
    displayBST(root);

    return 0;
}
