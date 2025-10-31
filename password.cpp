#include<stdio.h>
#include<string.h>
int main()
{
    char password[40];
    printf("Enter the password: ");
    scanf("%s", password);  
    if(strcmp(password, "secure123") == 0)
        printf("Access Granted\n");
    else
        printf("Access Denied\n");
}