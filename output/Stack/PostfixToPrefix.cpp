#include <iostream>
using namespace std;

#define MAX 50

struct Stack {
    string data[MAX];
    int top;
};

Stack s;
Stack* p;

void Init() {
    p = &s;
    p->top = -1;
}

int Empty() { return (p->top == -1); }

int Full() { return (p->top == MAX - 1); }

void Push(string x) {
    if (!Full())
        p->data[++p->top] = x;
}

string Pop() {
    if (!Empty())
        return p->data[p->top--];
    return "";
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int main() {
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    Init();

    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        if (isalnum(ch)) {
            string temp = "";
            temp += ch;
            Push(temp);
        }
        else if (isOperator(ch)) {

            string op2 = Pop();
            string op1 = Pop();

            string exp = ch + op1 + op2;

            Push(exp);
        }
    }

    string prefix = Pop();

    cout << "Prefix Expression: " << prefix << endl;
    return 0;
}
