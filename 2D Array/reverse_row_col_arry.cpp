#include<stdio.h>
int main(){
    
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int rev[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 2,k=0; j >=0 ,k<3; j--,k++)
//         {
//             rev[i][k]=arr[i][j];
//         }
        
//     }
// for (int i = 0; i < 3; i++)
//     {
//         for (int k=0;  k<3; k++)
//         {
//             printf("%d ",rev[i][k]);
//         }
//         printf("\n");
//     }
    for (int i = 0; i < 3; i++)
    {
        for (int k=2;  k>=0; k--)
        {
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}