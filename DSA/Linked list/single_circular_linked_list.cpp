#include <iostream>
#include <cstdlib>
#define null 0
using namespace std;
// Circular Linked List Creation
    //Node Creation
struct node
{
    int data;
    node *next;
};

node *first, *temp, *ttemp,*p,*q,*r;
//linked list initialisation
void init()
{
    first = temp = ttemp = null;
}
    //For creating first node

    void createfirst(int val)
    {
        first = new node;
        
        first->data= val;
        first->next = first;
    }
    
    //For adding node 
    
void addnode(int val)
{
    temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }

    ttemp = new node;
   ttemp->data= val;
    ttemp->next = first;
    temp->next = ttemp;
}
//For Displaying Each Node of Linked List
void display()
{
    temp = first;
    cout << "List:\n";
    do
    {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != first);
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
    ttemp = temp->next;
    p = new node;
    p->data = y;
    temp->next = p;
    p->next = ttemp;    
    
}
// Adding a new node Before the first node (addBeforeFirst(int x))
void addBeforeFirst(int val)
{
    temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }
    ttemp = new node;
    ttemp->data = val;
    ttemp->next = first;
    first = ttemp;
    temp->next = first;
}
// Adding a new node Before a given data (addBefore(int x,int y))
void addBefore(int x, int y)
{
    temp = first;
    while (temp->next->data != x)
    {
        temp = temp->next;
    }
    p = new node;
    p->data = y;
    p->next = temp->next;
    temp->next = p;
}
// Adding a new node Before the last node (addBeforeLast(int x)
void addBeforeLast(int x)
{
    temp = first;
    while (temp->next->next != first)
    {
        temp = temp->next;
    }
    p = new node;
    p->data = x;
    p->next = temp->next;
    temp->next = p;
}
// Deleting the first node (delFirst( )
void deleteFirst()
{
    temp = first;
    while (temp->next != first)
    {
        temp = temp->next;
    }
    p = first;
    first = first->next;
    temp->next = first;
    delete p;
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
    delete ttemp;
}
// Deleting a node Before a given data (delBefore(int x))
void deleteBefore(int x)
{
    temp = first;
    while (temp->next->next->data != x)
    {
        temp = temp->next;
    }
    ttemp = temp->next;
    temp->next = ttemp->next;
    delete ttemp;
}
// Swapping the First and Second Node (swapFirstSecond( )
void swapFirstSecond()
{
    temp = first->next;
    ttemp = temp->next;
    temp->next = first;
    first->next = ttemp;
    first = temp;
}
// Swapping the Last and Last Second Node (swapLastSecondLast( )
void swapLastLastSecond()
{
    temp = first;
    while (temp->next->next != first)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = temp->next;
    
    ttemp->next = p;
    p->next = temp;
    temp->next = first;
}
//For Reversing the linked list
void reverseList()
{
    p = first;
    q = null;
    r = null;
    do
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    } while (p != first);
    first->next = q;
    first = q;
}
// Swapping the Mth And Nth Node (swapMthNth( )
void swapNodes(int m, int n)
{
    if (m == n)
        return;
    p = first;
    q = null;
    for (int i = 1; i < m; i++)
    {
        q = p;
        p = p->next;
    }
    r = first;
    node *nt = null;
    for (int i = 1; i < n; i++)
    {
        nt = r;
        r = r->next;
    }
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