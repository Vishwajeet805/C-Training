#include <stdio.h>
#include <stdlib.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int **a=(int **)malloc(r*sizeof(int*));
    int **b=(int **)malloc(r*sizeof(int*));
    for(i=0;i<r;i++){ a[i]=(int *)malloc(c*sizeof(int)); b[i]=(int *)malloc(c*sizeof(int)); }
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&b[i][j]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }
}
