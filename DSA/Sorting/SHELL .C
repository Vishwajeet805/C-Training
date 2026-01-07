#include<stdio.h>
#include<conio.h>
void shell_sort(int a[],int n)
{int i,j,k,temp;
 for(i=n/2; i>0; i=i/2)
 {//printf("\ni=%d\n",i);// getch();
  for(j=i; j<n; j++)
   {// printf("\nj=%d\n",j);getch();
     for(k=j-i; k>=0; k=k-i)
     {//printf("\nk=%d\n",k);//getch();
        if(a[k+i]>=a[k])break;
        else
        {temp=a[k];   a[k]=a[k+i];a[k+i]=temp;
        }} }}}
 int main()
{
  int a[11],i;
  //clrscr();
  printf("Enter Array to Be Sorted\n");
  for(i=0;i<11;i++)
  scanf("%d",&a[i]);
  shell_sort(a,11);
  printf("\nSorted Array is\n");
  for(i=0;i<11;i++)
  printf("\t%d",a[i]);
  getch();

}
