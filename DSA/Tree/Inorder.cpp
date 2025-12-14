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

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}



int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);

    cout << "Inorder Traversal: ";
    inorder(root);
    
    return 0;
}
