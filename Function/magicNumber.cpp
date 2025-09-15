#include<stdio.h>
int magicNumber(int n)
{
    int sum=0;
    while(n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    while(sum > 9)
    {
        int digit =sum % 10;
        sum += digit;
        sum = sum / 10;
    }
    printf("\n%d\n", sum  );
    (sum==1)?printf("Magic number"):printf("Not a Magic number");
    return 0;
}
int main()
{
    int n;
    printf("NUMBER=");
    scanf("%d",&n);
    magicNumber(n);
}
