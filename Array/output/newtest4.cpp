#include <iostream>
using namespace std;
// Queue Implementation
#define MAX 5
int q[MAX], front=-1, rear=-1;

void enqueue(int x){
    if(rear==MAX-1){
        cout<<"Queue Full\n";
        return;
    }
    if(front==-1) front=0;
    q[++rear]=x;
}

void dequeue(){
    if(front>rear || front==-1){
        cout<<"Queue Empty\n";
        return;
    }
    cout<<"Removed "<<q[front++]<<endl;
}

int main(){
    enqueue(5);
    enqueue(15);
    dequeue();
}
