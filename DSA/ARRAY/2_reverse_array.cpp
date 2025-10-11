#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int min, max;

    for (int i = 0, j = 4; i < 5 / 2; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}