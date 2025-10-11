#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,7,8,9,10};
    int n=10;
    int sum=0;
    int num=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    for(int i=1;i<=10;i++)
    {
        num=num+i;
    }
    printf("Missing number is %d",num-sum);
    return 0;
}