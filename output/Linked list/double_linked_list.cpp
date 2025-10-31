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
//delete node before a given data
void delBefore(int val)
{
    temp = first;
    while (temp->data != val)
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
void swapsl()//swap last and second last
{
    temp = first;
    while (temp->next != null)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = ttemp->prev;

    p->next = temp;
    temp->prev = p;

    temp->next = ttemp;
    ttemp->prev = temp;

    ttemp->next = null;
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

int main()
{
    init();

    createfirst(10);
    addnode(20);
    addnode(30);
    addAfter(20, 25);
    display();
    delBefore(25);
    display();
    swapsl();
    display();

}
