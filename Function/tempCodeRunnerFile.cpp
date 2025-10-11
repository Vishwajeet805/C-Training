#include<stdio.h>
int printX()
{
    for (int i=0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
            if (j==i||j=i-1)
             printf("* ");
            else
            printf("  ");
        }
    }
    return 0;
}
int main()
{
    printX();
}