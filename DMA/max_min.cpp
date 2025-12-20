#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,max;
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++) if(a[i]>max) max=a[i];
    printf("%d",max);
    free(a);
    int min;
    scanf("%d",&n);
    int *b = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    min=b[0];
    for(i=1;i<n;i++) if(b[i]<min) min=b[i];
    printf("%d",min);
    free(b);
}
