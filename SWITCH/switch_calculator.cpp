#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first numbers :");
    scanf("%d", &a);
    printf("Enter the second numbers :");
    scanf("%d", &b);
    int choice;
    printf("1. Addition\n2. Subtarct\n3.Multiplication\n4.Division\nEnter the choice : ");
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        printf("The sum is : %d", a + b);
        break;
    case 2:
        printf("The difference is : %d", a - b);
        break;
    case 3:
        printf("The product is : %d", a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("Can't divide by 0.");
        }
        else
        {
            printf("The quotient is : %.2f", (float)a / b);
        }

    default:
        printf("Invalid choice.");
    }
    return 0;
}