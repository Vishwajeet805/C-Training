#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    int min = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    printf("\nMin =%d", min);
    int max = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    printf("\nMax =%d", max);
    return 0;
}
