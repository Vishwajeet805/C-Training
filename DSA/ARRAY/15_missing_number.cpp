#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3,4,7,9,10, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = (n + 1) * (n + 2) / 2; 
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    int missing_number = total - sum;
    cout << "Missing number is: " << missing_number << endl;
    
    return 0;
}