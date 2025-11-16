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
    string prefix;
    cout << "Enter Prefix Expression: ";
    cin >> prefix;

    Init();

    for (int i = prefix.length() - 1; i >= 0; i--) {

        char ch = prefix[i];

        if (isalnum(ch)) {
            string temp = "";
            temp += ch;
            Push(temp);
        }
        else if (isOperator(ch)) {

            string op1 = Pop();
            string op2 = Pop();

            string exp = op1 + op2 + ch;

            Push(exp);
        }
    }

    string postfix = Pop();

    cout << "Postfix Expression: " << postfix << endl;
    return 0;
}
