#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int));
    int *b = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){ scanf("%d",&a[i]); b[i]=a[i]; }
    for(i=0;i<n;i++) printf("%d ",b[i]);
    free(a); free(b);
}
