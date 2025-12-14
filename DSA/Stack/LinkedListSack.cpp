#include <iostream>
using namespace std;
#define MAX 5

struct LStack
{
    int data;
    LStack *next;
};
LStack *top,*temp,*ttemp;

void Init()
{
    top=temp=ttemp=NULL;
}

void Push(int x)
{
    temp=new LStack;
    temp->data=x;
    temp->next=top;
    top=temp;
}

int Pop()
{
    int x;  
    if(top==NULL)
        return 0;
    x=top->data;
    ttemp=top;
    top=top->next;
    delete ttemp;
    return x;
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