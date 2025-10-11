#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int largest,second_largest;
    largest=a[0];
    second_largest=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            second_largest=largest;
            largest=a[i];
        }
        else if(a[i]>second_largest && a[i]!=largest)
        {
            second_largest=a[i];
        }
    }
    printf("Second largest element is %d",second_largest);
    return 0;
}