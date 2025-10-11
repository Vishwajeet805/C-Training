//Linear search
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key=5;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at index %d",i);
            break;
        }
    }
}
