#include <iostream>
#include <stack>
using namespace std;

struct Node {
    char data;
    Node *left, *right;
};

// Check operand
bool isOperand(char ch) {
    return (isalnum(ch));   // letter or digit
}

// Create new node
Node* createNode(char ch) {
    Node* n = new Node();
    n->data = ch;
    n->left = n->right = NULL;
    return n;
}

// Build Expression Tree from PREFIX
Node* buildExpressionTree(string prefix) {
    stack<Node*> st;
    Node *root = NULL;

    // Scan prefix from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char ch = prefix[i];

        Node* p = createNode(ch);

        if (isOperand(ch)) {
            // Operand → push
            st.push(p);
        } else {
            // Operator → pop two nodes
            Node* leftChild = st.top(); st.pop();
            Node* rightChild = st.top(); st.pop();

            p->left = leftChild;
            p->right = rightChild;

            st.push(p);
        }
    }

    // Final root
    root = st.top();
    return root;
}

// Inorder traversal (Infix)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder traversal (Prefix)
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal (Postfix)
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    string prefix = "*+AB-CD";
    Node* root = buildExpressionTree(prefix);

    cout << "Inorder (Infix): ";
    inorder(root);

    cout << "\nPreorder (Prefix): ";
    preorder(root);

    cout << "\nPostorder (Postfix): ";
    postorder(root);

    return 0;
}
