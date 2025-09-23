#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first numbers :");
    scanf("%d",&a);
    printf("Enter the second numbers :");
    scanf("%d",&b);
    int choice;
    printf("1. Addition\n2. Subtarct\n3.Multiplication\n4.Division\nEnter the choice : ");    
    scanf(" %d", &choice);
    if (choice==1)
    {
        printf("The sum is : %d",a+b);
    }
    else if (choice==2)
    {
        printf("The difference is : %d",a-b);
    }
    else if (choice==3)
    {
        printf("The product is : %d",a*b);
    }
    else if (choice==4)
    {
        if (b!=0)
        {
            printf("The quotient is : %.2f", (float)a / b);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
        
    }
    else
    {
        printf("Invalid choice.");
    }
    return 0;
}