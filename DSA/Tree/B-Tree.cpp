#include <iostream>
using namespace std;

const int M = 3;   // Order of B-Tree

struct BTreeNode {
    int keys[M-1];
    BTreeNode* child[M];
    int n;
    bool leaf;
};

// Create new node
BTreeNode* createNode(bool leaf) {
    BTreeNode* node = new BTreeNode();
    node->leaf = leaf;
    node->n = 0;
    for(int i = 0; i < M; i++)
        node->child[i] = NULL;
    return node;
}

// Traverse B-Tree
void traverse(BTreeNode* root) {
    int i;
    for(i = 0; i < root->n; i++) {
        if(!root->leaf)
            traverse(root->child[i]);
        cout << root->keys[i] << " ";
    }
    if(!root->leaf)
        traverse(root->child[i]);
}

// Split child
void splitChild(BTreeNode* parent, int i, BTreeNode* y) {
    BTreeNode* z = createNode(y->leaf);
    z->n = 1;

    z->keys[0] = y->keys[1];

    if(!y->leaf)
        z->child[0] = y->child[2];

    y->n = 1;

    for(int j = parent->n; j >= i+1; j--)
        parent->child[j+1] = parent->child[j];

    parent->child[i+1] = z;

    for(int j = parent->n-1; j >= i; j--)
        parent->keys[j+1] = parent->keys[j];

    parent->keys[i] = y->keys[0];
    parent->n++;
}

// Insert non-full
void insertNonFull(BTreeNode* node, int key) {
    int i = node->n - 1;

    if(node->leaf) {
        while(i >= 0 && key < node->keys[i]) {
            node->keys[i+1] = node->keys[i];
            i--;
        }
        node->keys[i+1] = key;
        node->n++;
    } else {
        while(i >= 0 && key < node->keys[i])
            i--;
        i++;

        if(node->child[i]->n == M-1) {
            splitChild(node, i, node->child[i]);
            if(key > node->keys[i])
                i++;
        }
        insertNonFull(node->child[i], key);
    }
}

// Insert key
void insert(BTreeNode*& root, int key) {
    if(root == NULL) {
        root = createNode(true);
        root->keys[0] = key;
        root->n = 1;
        return;
    }

    if(root->n == M-1) {
        BTreeNode* s = createNode(false);
        s->child[0] = root;
        splitChild(s, 0, root);

        int i = 0;
        if(key > s->keys[0])
            i++;
        insertNonFull(s->child[i], key);

        root = s;
    } else {
        insertNonFull(root, key);
    }
}

int main() {
    BTreeNode* root = NULL;

    int arr[] = {10, 20, 5, 6, 12, 30, 7, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++)
        insert(root, arr[i]);

    cout << "B-Tree Traversal: ";
    traverse(root);

    return 0;
}
