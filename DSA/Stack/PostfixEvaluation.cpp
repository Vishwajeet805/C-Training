#include <iostream>
using namespace std;

#define MAX 50

struct Stack {
    int data[MAX];
    int top;
};

Stack s;

void Init() { 
    s.top = -1; 
}

int Empty() { 
    return (s.top == -1); 
}

int Full() { 
    return (s.top == MAX - 1); 
}

void Push(int x) {
    if (!Full())
        s.data[++s.top] = x;
}

int Pop() {
    if (!Empty())
        return s.data[s.top--];
    return 0;
}

int main() {
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    Init();

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            Push(ch - '0');     
        }
        else {
            int op2 = Pop();
            int op1 = Pop();
            int result = 0;

            switch (ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
            }
            Push(result);
        }
    }

    cout << "Postfix Evaluation Result: " << Pop() << endl;
    return 0;
}
