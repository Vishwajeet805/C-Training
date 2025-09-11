#include<stdio.h>
int printX()
{
    for (int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if (j==i ||j==4-i)
             printf("* ");
            else
            printf("  ");
        }printf("\n");
    }
    return 0;
}
int main()
{
    printX();
}