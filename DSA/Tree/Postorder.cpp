#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}



void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);

    
    cout << "\nPostorder Traversal: ";
    postorder(root);
    return 0;
}
