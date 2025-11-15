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
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

int main() {
    string infx;
    char ch, elem;
    string pofx = "";
    int i = 0;

    cout << "Enter Infix Expression: ";
    cin >> infx;

    Init();
  
    for (i = 0; i < infx.length(); i++) {
        ch = infx[i];

        if (ch == '(') {
            Push(ch);
        }
        else if (isalnum(ch)) {
            pofx += ch;
        }
        else if (ch == ')') {
            while (s.data[s.top] != '(')
                pofx += Pop();
            elem = Pop();
        }
        else {  
            while (precedence(s.data[s.top]) >= precedence(ch))
                pofx += Pop();
            Push(ch);
        }
    }
    while (!Empty()) {
        pofx += Pop();
    }
   

    cout << "Postfix Expression: " << pofx << endl;

    return 0;
}