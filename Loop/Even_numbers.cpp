#include<stdio.h>
int main()
{
    int n;
    
    printf("From 1 to 10\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n ", i);
    }
    
    printf("From 10 to 1\n");
    for(int i = 10; i >= 1; i--)
    {
        printf("%d\n ", i);
    }
    
    return 0;

}
