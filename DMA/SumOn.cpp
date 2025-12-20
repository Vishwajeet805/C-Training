#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int *a = (int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++){ scanf("%d",&a[i]); sum+=a[i]; }
    printf("%d",sum);
    free(a);
}
