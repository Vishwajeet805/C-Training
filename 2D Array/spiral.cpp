#include<stdio.h>
int main(){
    
    int arr[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
        for (int i=0, j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
         printf("%d ",arr[1][2]);
    for (int i=2, j = 2; j >=0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        for (int i=1, j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
    return 0;

}