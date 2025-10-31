    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    #include <iostream>
    #define null 0
    using namespace std;

    struct node
    {
    int data;
    node *next;
    };
    node *first, *temp, *ttemp, *p, *q, *r, *ptemp, *pttemp,
        *ntemp, *nttemp;

    void init()
    {
    first = temp = ttemp = null;
    }
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
    temp->next = ttemp;
    }
    void createfirst(int val)
    {
    first = new node;
    first->data = val;
    first->next = null;
    }
    void addAfter(int x, int y)
    {
    temp = first;
    while ((temp->data != x))
    {
        temp = temp->next;
    }
    ttemp = temp->next;
    p = new node;
    p->data = y;
    temp->next = p;
    p->next = ttemp;
    }
    void addBeforeFirst(int val)
    {
    temp = new node;
    temp->data = val;
    temp->next = first;
    first = temp;
    }
    void addBefore(int x, int y)
    {
    temp = first;
    while (temp->data != x)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = new node;
    p->data = y;
    ttemp->next = p;
    p->next = temp;
    }
    void addBeforeLast(int x)
    {
    temp = first;
    while (temp->next != null)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = new node;
    p->data = x;
    ttemp->next = p;
    p->next = temp;
    }
    void deleteFirst()
    {
    temp = first;
    first = first->next;
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
    ttemp->next = null;
    delete temp;
    }
    void delBefore(int x)
    {
    temp = first;
    while (temp->next->data != x)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = temp->next;
    ttemp->next = p;
    temp->next = null;
    delete temp;
    }
    // question swapping of mth and nth node
    void swapFirstSecond()
    {
    temp = first->next;
    ttemp = temp->next;
    temp->next = first;
    first->next = ttemp;
    first = temp;
    }
    void swapLastLastSecond()
    {
    temp = first;
    while (temp->next->next != null)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = temp->next;
    ttemp->next = p;
    p->next = temp;
    temp->next = null;
    }
    void disp()
    {
    temp = first;
    while (temp != null)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
    }
    int main()
    {
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(50);
    addnode(60);
    disp();
    addBeforeFirst(70);
    disp();
    addAfter(30, 90);
    disp();
    addBefore(30, 50);
    disp();
    addBeforeLast(570);
    disp();
    deleteFirst();
    disp();
    delBefore(570);
    disp();
    deleteAfter(570);
    disp();
    swapFirstSecond();
    disp();
    swapLastLastSecond();
    disp();
    }