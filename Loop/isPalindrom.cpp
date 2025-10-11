#include<stdio.h>
int main()
{
    int n, num = 0, last, a;
    printf("Enter a number : ");
    scanf("%d", &n);
    a = n;
    while (n != 0) {
        last = n % 10;
        num = num * 10 + last;
        n =n/ 10;
    }
a == num?printf("%d is a palindrome.", a): printf("%d is not a palindrome.", a);
    return 0; 

}