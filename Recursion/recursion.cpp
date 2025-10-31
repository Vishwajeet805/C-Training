//check palindrome using recursion

#include<stdio.h>
int palindrome(int str[], int s, int e)
{
    if (s >= e)
        return 1;
    if (str[s] != str[e])
        return 0;
    return palindrome(str, s + 1, e - 1);
}
int main()
{
    int str[] = {1, 2, 3, 2, 1};
    
    int len = 0;
    while (str[len] != '\0')
        len++;
    if (palindrome(str, 0, len - 1))
        printf("palindrome.\n");
    else
        printf("not a palindrome.\n");
    return 0;
}