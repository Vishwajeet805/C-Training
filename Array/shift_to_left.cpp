#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("before ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[4] = 1;
    printf("\nafter ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}