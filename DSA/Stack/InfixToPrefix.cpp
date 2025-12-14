#include <iostream>
using namespace std;

#define MAX 50

struct Stack
{
    char data[MAX];
    int top;
};

Stack s;

void Init() 
{ 
    s.top = -1; 
}

int Empty() 
{ 
    return (s.top == -1); 
}

int Full() 
{ 
    return (s.top == MAX - 1); 
}

void Push(char x)
{
    if (!Full())
        s.data[++s.top] = x;
}

char Pop() 
{ 
    return (!Empty()) ? s.data[s.top--] : '\0'; 
}

char Top() 
{ 
    return (!Empty()) ? s.data[s.top] : '\0'; 
}

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

int main()
{
    string infix, prefix = "";
    cout << "Enter Infix Expression: ";
    cin >> infix;

    Init();

    for (int i = infix.length() - 1; i >= 0; i--)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            prefix = ch + prefix;
        }
        else if (ch == ')')
        {
            Push(ch);
        }
        else if (ch == '(')
        {
            while (Top() != ')')
                prefix = Pop() + prefix;
            Pop();
        }
        else
        {
            while (precedence(Top()) > precedence(ch))
                prefix = Pop() + prefix;
            Push(ch);
        }
    }

    while (!Empty())
        prefix = Pop() + prefix;

    cout << "Prefix Expression: " << prefix << endl;
    return 0;
}

