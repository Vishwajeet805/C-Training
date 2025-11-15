#include <iostream>
#include <cstdlib>
#define null 0
using namespace std;
//Double Circular Linked List Creation
    //Node Creation
struct node {
    int data;
    node *next, *prev;
};

node *first, *temp, *ttemp, *p, *q, *r;
//linked list initialisation
void init() {
    first = temp = ttemp = null;
}
//For creating first node
void createfirst(int val) {
    first = new node;
    first->data = val;
    first->next = first;
    first->prev = first;
}    
//For adding node 

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
//For Displaying Each Node of Linked List

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

// Adding a new node After a given data (addAfter(int x,int y))
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

// Adding a new node Before the first node (addBeforeFirst(int x))
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


// Adding a new node Before a given data (addBefore(int x,int y))
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
// Adding a new node Before the last node (addBeforeLast(int x)
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
// Deleting the first node (delFirst( )
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
// Deleting a node After a given data (delAfter(int x))

void deleteAfter(int x) {
    temp = first;
    while (temp->data != x)
        temp = temp->next;
    ttemp = temp->next;
    temp->next = ttemp->next;
    ttemp->next->prev = temp;
    delete ttemp;
}
// Deleting a node Before a given data (delBefore(int x))

void deleteBefore(int x) {
    temp = first;
    while (temp->next->next->data != x)
        temp = temp->next;
    ttemp = temp->next;
    temp->next = ttemp->next;
    ttemp->next->prev = temp;
    delete ttemp;
}

// Swapping the First and Second Node (swapFirstSecond( )
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
// Swapping the Last and Last Second Node (swapLastSecondLast( )
// Swapping the Mth And Nth Node (swapMthNth( )
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
//For Reversing the linked list

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