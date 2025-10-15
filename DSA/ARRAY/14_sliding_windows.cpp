#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 12; 
    int left = 0;
    int curr_sum = 0;
    bool found = 0;
    
    for(int right = 0; right < n; right++) {
        curr_sum += arr[right];
        

        while(curr_sum > s && left <= right) {
            curr_sum -= arr[left];
            left++;
        }
        if(curr_sum == s) {
            cout << (left + 1) << " " << (right + 1) << endl; // 1-based indices
            found = 1;
            break; 
        }
    }
    
    if(!found) {
        cout << -1 << endl; 
    }
    
    return 0;
}
