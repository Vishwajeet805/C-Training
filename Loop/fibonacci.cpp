#include<stdio.h>
int main()
{
    int n=8;
    int t1=0;
    int t2=1;
    for(int i=0;i<=n;i++){
        printf("%d ",t1);
        int next=t1+t2;
        t1=t2;
        t2=next;
    }
}