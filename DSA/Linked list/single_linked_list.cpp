    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    #include <iostream>
    #define null 0
    using namespace std;
// Single Linked List Creation
    //Node Creation
    struct node
    {
    int data;
    node *next;
    };
    node *first, *temp, *ttemp, *p, *q, *r, *ptemp, *pttemp,
        *ntemp, *nttemp;
    //Linked list initialisation
    void init()
    {
    first = temp = ttemp = null;
    }
    //For creating first node
    void createfirst(int val)
    {
        first = new node;
        first->data = val;
        first->next = null;
    }
    //For adding node   
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
    //For adding a new node after a given data
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
    //For adding a new node before first node
    void addBeforeFirst(int val)
    {
    temp = new node;
    temp->data = val;
    temp->next = first;
    first = temp;
    }
    //For adding a new node before given data
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
    //For adding a new node before the last node
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
    //For deleting the first node
    void deleteFirst()
    {
    temp = first;
    first = first->next;
    delete temp;
    }
    //For Deleting a node After a given data 
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
    // Deleting a node Before a given data (delBefore(int x))
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
// Swapping the Mth And Nth Node (swapMthNth( )
    void swapNodes(int m, int n)
    {
        //
    }
    // For reversing the linked list
    void reverseList()
    {
    p = null;
    temp = first;
    while (temp != null)
    {
        ttemp = temp->next;
        temp->next = p;
        p = temp;
        temp = ttemp;

    }
    first = p;
    }
    //For Displaying Each Node of Linked List
    void display()
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
    delBefore(570);
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