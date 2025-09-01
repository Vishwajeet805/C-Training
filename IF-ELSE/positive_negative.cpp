#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n==0)
    {
        printf("Zero");
    }
    else if(n>0)
    {
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}