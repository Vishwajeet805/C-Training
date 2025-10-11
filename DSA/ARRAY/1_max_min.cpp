#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int min,max;
    min=a[0];
    max=a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum= %d\n",max);
    printf("Minimum= %d",min);
    return 0;
}