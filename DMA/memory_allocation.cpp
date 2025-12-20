#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    scanf("%d", p);
    printf("%d", *p);
    free(p);
    int n,i;
    scanf("%d",&n);
    int *a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    free(a);
    return 0;
}
