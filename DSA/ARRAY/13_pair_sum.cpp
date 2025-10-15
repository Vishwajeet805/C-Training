#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
  
   int i = 0, j = n - 1;
        while (j >i )
        {
          int sum = arr[i] + arr[j];
          if (sum == target)
          {
              printf("Pair found (%d, %d)\n", arr[i], arr[j]);
              i++;
              j--;
          }
          else if (sum < target)
          {
              i++;
          }
          else
          {
              j--;
        }
    }
    return 0;
}