//print maximum value of pairs of elements in array int arr[5] = {-10, 20, 30, -40, 50};
#include<stdio.h>
int main()
{
    int arr[5] = {-10, 20, 30, -40, 50};
    int max = arr[0];
    for (int i = 0; i < 5; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int ar[10]={1,2,2,3,4,4,4,5,5,5};
    int freq[10] = {0};
    for (int i = 0; i < 10; i++){
        freq[ar[i]]++;  
    }
    printf("Maximum value in the array is: %d\n", max);
    printf("Frequency of elements in the array:\n");
    for (int i = 0; i < 10; i++){
        if (freq[i] != 0){
            printf("Element %d: %d times\n", i, freq[i]);   
         }} 

}
