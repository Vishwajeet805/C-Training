#include <stdio.h>
int main()
{
    int arr[] = {0, 1, 2, 0, 2, 0, 1, 1, 2, 2, 2, 0, 1, 2, 1, 0, 2};
    int max = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[256] = {0};
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];
        count[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (count[i] > 0)
            printf("Element %d occurs %d times\n", i, count[i]);
    }
    return 0;
}