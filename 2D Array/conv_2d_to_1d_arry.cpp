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
    printf("\n2d array into 1D\n") ;
    int one[9];
    int m=0;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
        {
            one[m]=arr[i][j];
            m++;
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}