#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, NULL}}};
    Node* prev = NULL;
    Node* curr = head;

    while (curr) {
        Node* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;

    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
