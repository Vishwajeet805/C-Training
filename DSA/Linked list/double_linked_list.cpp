#include <iostream>
#include <cstdlib>
#define null 0
using namespace std;
// Double Linked List Creation
    //Node Creation
struct node
{
    int data;
    node *next, *prev;
};

node *first, *temp, *ttemp, *p;
    //Linked list initialisation

void init()
{
    first = temp = ttemp = null;
}

// create first node
void createfirst(int val)
{
    first = new node;
    first->data = val;
    first->next = null;
    first->prev = null;
}

// add node of given data
void addnode(int val)
{
    temp = first;
    while (temp->next != null)
    {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = null;
    ttemp->prev = temp;

    temp->next = ttemp;
}
    //For Displaying Each Node of Linked List
void display()
{
    temp = first;
    cout << "List:\n";
    while (temp != null)
    {
        cout << temp->data ;
        temp = temp->next;
        cout << endl;
    }
    cout << endl;
}
// Adding a new node After a given data (addAfter(int x,int y))
void addAfter(int x, int y)
{
    temp = first;
    while (temp->data != x)
    {
        temp = temp->next;
    }

    ttemp = new node;
    ttemp->data = y;
    ttemp->next = temp->next;
    ttemp->prev = temp;

    if (temp->next != null)
    {
        temp->next->prev = ttemp;
    }
    temp->next = ttemp;
}
// Adding a new node Before the first node (addBeforeFirst(int x))
void addBeforeFirst(int val)
{
    temp = new node;
    temp->data = val;
    temp->next = first;
    temp->prev = null;
    
    if (first != null)
    {
        first->prev = temp;
    }
    first = temp;
}
// Adding a new node Before a given data (addBefore(int x,int y))
void addBefore(int x, int y)
{
    temp = first;
    while (temp->data != x)
    {
        temp = temp->next;
    }

    ttemp = new node;
    ttemp->data = y;
    ttemp->next = temp;
    ttemp->prev = temp->prev;

    if (temp->prev != null)
    {
        temp->prev->next = ttemp;
    }
    temp->prev = ttemp;

}
// Adding a new node Before the last node (addBeforeLast(int x)
void addBeforeLast(int x)
{
    temp = first;
    while (temp->next != null)
    {
        temp = temp->next;
    }

    ttemp = new node;
    ttemp->data = x;
    ttemp->next = temp;
    ttemp->prev = temp->prev;

    if (temp->prev != null)
    {
        temp->prev->next = ttemp;
    }
    temp->prev = ttemp;
}
// Deleting the first node (delFirst( )
void deleteFirst()
{
    temp = first;
    first = first->next;
    if (first != null)
    {
        first->prev = null;
    }
    delete temp;
}
// Deleting a node After a given data (delAfter(int x))
void deleteAfter(int x)
{
    temp = first;
    while (temp->data != x)
    {
        temp = temp->next;
    }
    ttemp = temp->next;
    p = ttemp->next;

    temp->next = p;
    if (p != null)
    {
        p->prev = temp;
    }

    ttemp->next = null;
    ttemp->prev = null;

    delete ttemp;
}
// Deleting a node Before a given data (delBefore(int x))
void deleteBefore(int x)
{
    temp = first;
    while (temp->next->data != x)
    {
        temp = temp->next;
    }
    ttemp = temp->prev;
    p = ttemp->prev;

    p->next = temp;
    temp->prev = p;

    ttemp->next = null;
    ttemp->prev = null;

    delete ttemp;
}
// Swapping the First and Second Node (swapFirstSecond( )
void swapFirstSecond()
{
    temp = first->next;
    ttemp = temp->next;
    temp->next = first;
    first->prev = temp;
    first->next = ttemp;
    if (ttemp != null)
    {
        ttemp->prev = first;
    }
    first = temp;
}
// Swapping the Last and Last Second Node (swapLastSecondLast( )
void swapLastLastSecond()
{
    temp = first;
    while (temp->next->next != null)
    {
        temp = temp->next;
    }
    ttemp = temp->next;

    temp->next = null;
    ttemp->prev = temp->prev;

    if (temp->prev != null)
    {
        temp->prev->next = ttemp;
    }
    ttemp->next = temp;
    temp->prev = ttemp;}
//For Reversing linked list
void reverseList()
{
    p = null;
    temp = first;
    while (temp != null)
    {
        ttemp = temp->next;
        temp->next = p;
        temp->prev = ttemp;
        p = temp;
        temp = ttemp;
    }
    first = p;
}
// Swapping the Mth And Nth Node (swapMthNth( )SKIP
void swapmthandnth(int m, int n)
{
    if (m == n)
        return;
    p = first;
    node *q = null;
    for (int i = 1; i < m && p != null; i++)
    {
        q = p;
        p = p->next;
    }
    node *r = first;
    node *nt = null;
    for (int i = 1; i < n && r != null; i++)
    {
        nt = r;
        r = r->next;
    }
    if (p == null || r == null)
        return;
    if (q != null)
    {
        q->next = r;
    }
    if (nt != null)
    {
        nt->next = p;
    }
    node *tempNext = p->next;
    p->next = r->next;
    r->next = tempNext;

    if (first == p)
        first = r;
    else if (first == r)
        first = p;
}

int main()
{
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