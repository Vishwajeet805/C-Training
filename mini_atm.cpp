#include<stdio.h>
int main()
{
    int balance=1890002,withdraw,deposit;
    printf("Welcome To ATM");
    printf("1.Check Balance\n2.Withdraw Money\n3.Deposit Money\n4.Exit");
    int choice; 
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch (choice)
       {
        case 1:
            printf("Your Balance is : %d",balance);
            break;
        case 2:
            printf("Enter the amount to withdraw : ");
            scanf("%d",&withdraw);
            if (withdraw>balance)
            {
                printf("Insufficient Balance");
            }
            else
            {
                balance=balance-withdraw;
                printf("Please collect your money\n");
                printf("Your new balance is : %d",balance);
            }
            break;
        case 3:
            printf("Enter the amount to deposit : ");
            scanf("%d",&deposit);
            balance=balance+deposit;
            printf("Your new balance is : %d",balance);
            break;
        case 4:
            printf("Thank you for using our ATM service.");
        default:
            printf("Invalid Choice");
       }
       return 0;

}