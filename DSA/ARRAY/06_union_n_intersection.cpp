#include <stdio.h>
int main()
{
    int a1[] = {1,3,2,6,4,7};
    int a2[] = {2,4,6,9,8,5};
   
    int n1 = sizeof(a1) / sizeof(a1[0]);
     int n2 = sizeof(a2) / sizeof(a2[0]);

    int count[1000] = {0};
    for(int i = 0; i < n1; i++) {
        count[a1[i]]++;
    }
    for(int i = 0; i < n2; i++) {
        count[a2[i]]++;
    }
    printf("Union of two arrays:\n");   
    for(int i = 0; i < 1000; i++) {
        if(count[i] > 0) {
            printf("%d ", i);
        }
    }
    printf("\nIntersection of two arrays:\n");
    for(int i = 0; i < 1000; i++) {
        if(count[i] > 1) {
            printf("%d ", i);
        }
    }
        return 0;
}