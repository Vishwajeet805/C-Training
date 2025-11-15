#include <iostream>
using namespace std;
#define MAX 5

struct Stack
{
    int data[MAX];
    int top;
};
Stack s,*p;

void Init()
{
    p=&s;
    p->top=-1;
}

int Empty()
{
    p=&s;
    if(p->top==-1)
        return 1;
    else
        return 0;   
}

int Full()
{
    p=&s;
    if (p->top==MAX-1)
        return 1;
    else
        return 0;  
}

void Push(int x)
{
    if(Full())
        return;
    p->top++;
    p->data[p->top]=x;
}

int Pop()
{
    int y;
    if(Empty())
        return 0;
    y=p->data[p->top];
    p->top--;
    return y;
}

int main()
{
    Init();
    Push(10);
    Push(20);
    Push(30);
    cout<<Pop()<<endl;
    cout<<Pop()<<endl;
    cout<<Pop()<<endl;
    return 0;
}