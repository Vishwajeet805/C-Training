#include<stdio.h>
int checkEvenOrOdd(int num){
    (num%2==0)?printf("Even"):printf("Odd");
    return 0;
}
int main()
{
    int a;
    printf("num=");
 scanf("%d",&a);
 checkEvenOrOdd(a);
}