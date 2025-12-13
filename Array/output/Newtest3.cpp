//5. Longest Word in a String
#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top=-1;

void push(int x){
    if(top==MAX-1){
        cout<<"Overflow\n";
        return;
    }
    stack[++top]=x;
}

void pop(){
    if(top==-1){
        cout<<"Underflow\n";
        return;
    }
    cout<<"Popped "<<stack[top--]<<endl;
}

int main(){
    push(10);
    push(20);
    pop();
    pop();
}
