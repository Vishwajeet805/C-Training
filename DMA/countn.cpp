#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int *a = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2==0) c++; }
    printf("%d",c);
    free(a);
}
