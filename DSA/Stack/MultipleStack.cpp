#include <iostream>
using namespace std;
#define MAX 10

struct MStack
{
    int data[MAX];
    int topA,topB;
};
MStack s,*p;

void Init()
{
    p=&s;
    p->topA=-1;
    p->topB=MAX;
}

int EmptyA()
{
    p=&s;
    if(p->topA==-1)
        return 1;
    else
        return 0;   
}

int EmptyB()
{
    p=&s;
    if(p->topB==MAX)
        return 1;
    else
        return 0;   
}

int Full()
{
    p=&s;
    if (p->topA+1==p->topB)
        return 1;
    else
        return 0;  
}

void PushA(int x)
{
    if(Full())
        return;
    p->topA++;
    p->data[p->topA]=x;
}

void PushB(int x)
{
    if(Full())
        return;
    p->topB--;
    p->data[p->topB]=x;
}

int PopA()
{
    int y;
    if(EmptyA())
        return 0;
    y=p->data[p->topA];
    p->topA--;
    return y;
}

int PopB()
{
    int y;
    if(EmptyB())
        return 0;
    y=p->data[p->topB];
    p->topB++;
    return y;
}

int main()
{
    Init();
    PushA(10);
    PushA(20);
    PushA(30);
    PushA(40);
    PushB(70);
    PushB(80);
    PushB(90);
    PushB(100);
    cout<<PopA()<<endl;
    cout<<PopB()<<endl;
    cout<<PopA()<<endl;
    cout<<PopB()<<endl;    
    cout<<PopA()<<endl;
    cout<<PopB()<<endl;
    cout<<PopA()<<endl;
    cout<<PopB()<<endl;
    return 0;
}