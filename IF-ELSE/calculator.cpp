#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first numbers :");
    scanf("%d",&a);
    printf("Enter the second numbers :");
    scanf("%d",&b);
    char choice;
       
    scanf(" %d", &choice);
    if (choice=='+')
    {
        printf("The sum is : %d",a+b);
    }
    else if (choice=='-')
    {
        printf("The difference is : %d",a-b);
    }
    else if (choice=='*')
    {
        printf("The product is : %d",a*b);
    }
    else if (choice=='/')
    {
        if (b!=0)
        {
            printf("The quotient is : %.2f",a/b);
        }
        else
        {
            printf("INF");
        }
        
    }
    else
    {
        printf("NA");
    }
    return 0;
}