#include<stdio.h>
int sum(int x, int y){
    return x+y;
}
int sum(int *x,int*y){
    *x=50;
    *y=20;
    int c=(*x)+(*y);
    return c;
}
int main(){
    int x=10;
    int y=20;
    
    int data = sum(*x , *y);
    printf("%d",data);
}
