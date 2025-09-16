#include<stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 3, 2, 1};
    int check = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != arr[6 - i - 1])
        {
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}