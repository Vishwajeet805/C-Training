#include <iostream>
#include <cstdlib>
#define null 0
using namespace std;

struct node {
    int data;
    node *next, *prev;
};

node *first, *temp, *ttemp, *p, *q, *r;

void init() {
    first = temp = ttemp = null;
}

void createfirst(int val) {
    first = new node;
    first->data = val;
    first->next = first;
    first->prev = first;
}

void addnode(int val) {
    temp = first;
    while (temp->next != first)
        temp = temp->next;
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = first;
    ttemp->prev = temp;
    temp->next = ttemp;
    first->prev = ttemp;
}

void display() {
    temp = first;
    cout << "List:\n";
    p = first;
    if (first == null) return;
    while (p->next != first) {
        cout << p->data << endl;
        p = p->next;
    }
    cout << p->data << endl; // last node
    cout << endl;
}

void addAfter(int x, int y) {
    temp = first;
    while (temp->data != x)
        temp = temp->next;
    ttemp = new node;
    ttemp->data = y;
    ttemp->next = temp->next;
    ttemp->prev = temp;
    temp->next->prev = ttemp;
    temp->next = ttemp;
}

void addBeforeFirst(int val) {
    temp = first;
    while (temp->next != first)
        temp = temp->next;
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = first;
    ttemp->prev = temp;
    temp->next = ttemp;
    first->prev = ttemp;
    first = ttemp;
}

void addBefore(int x, int y) {
    temp = first;
    while (temp->next->data != x)
        temp = temp->next;
    p = new node;
    p->data = y;
    p->next = temp->next;
    p->prev = temp;
    temp->next->prev = p;
    temp->next = p;
    if (temp->next == first)
        first = p;
}

void addBeforeLast(int x) {
    temp = first;
    while (temp->next->next != first)
        temp = temp->next;
    p = new node;
    p->data = x;
    p->next = temp->next;
    p->prev = temp;
    temp->next->prev = p;
    temp->next = p;
}

void deleteFirst() {
    temp = first;
    while (temp->next != first)
        temp = temp->next;
    p = first;
    first = first->next;
    first->prev = temp;
    temp->next = first;
    delete p;
}

void deleteAfter(int x) {
    temp = first;
    while (temp->data != x)
        temp = temp->next;
    ttemp = temp->next;
    temp->next = ttemp->next;
    ttemp->next->prev = temp;
    delete ttemp;
}

void deleteBefore(int x) {
    temp = first;
    while (temp->next->next->data != x)
        temp = temp->next;
    ttemp = temp->next;
    temp->next = ttemp->next;
    ttemp->next->prev = temp;
    delete ttemp;
}

void swapFirstSecond() {
    temp = first->next;
    ttemp = temp->next;
    temp->next = first;
    first->prev = temp;
    first->next = ttemp;
    ttemp->prev = first;
    temp->prev = first->prev;
    first->prev->next = temp;
    first = temp;
}

void swapLastLastSecond() {
    temp = first;
    while (temp->next->next != first) {
        ttemp = temp;
        temp = temp->next;
    }
    p = temp->next;
    ttemp->next = p;
    p->prev = ttemp;
    p->next = temp;
    temp->prev = p;
    temp->next = first;
    first->prev = temp;
}

void reverseList() {
    temp = first;
    p = first;
    q = first;
    while (p->next != first) {
        q = p->prev;
        p->prev = p->next;
        p->next = q;
        p = p->prev;
    }
    q = p->prev;
    p->prev = p->next;
    p->next = q;
    first = p;
}

int main() {
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(50);
    addnode(60);
    display();
    addBeforeFirst(70);
    display();
    addAfter(30, 90);
    display();
    addBefore(30, 50);
    display();
    addBeforeLast(570);
    display();
    deleteFirst();
    display();
    deleteBefore(570);
    display();
    deleteAfter(570);
    display();
    swapFirstSecond();
    display();
    swapLastLastSecond();
    display();
    reverseList();
    display();
}