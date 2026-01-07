
#include<stdio.h>
#include<conio.h>
void selection(int a[],int n)
{   int i,j,large,index;
   for(i=n-1;i>0;i--)
  {  large=a[0];
     index=0;
     for(j=1;j<=i;j++)
     { if(a[j]>large)
     {large=a[j];index=j;
     }}
     a[index]=a[i];
     a[i]=large;
     }}

int main()
{
  int a[10],i;
  printf("Enter Array\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  selection(a,10);
  printf("\nsorted Array\n");
  for(i=0;i<10;i++)
  printf("\n%d",a[i]);
  getch();
 }
