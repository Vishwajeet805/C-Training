#include <iostream>
#include <cstdlib>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next, *prev;
};

node *first, *temp, *ttemp, *p;

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

// add nodeof given data
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
// add a node after a given data
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
    temp->prev = ttemp;
}
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