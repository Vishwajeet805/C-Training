#include <iostream>
using namespace std;
int main(){

    int arr[] = {2,3,-2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mini = arr[0];
    int maxi= arr[0];
    int result = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(maxi,mini);
        }
        maxi = max(arr[i],maxi*arr[i]);
        mini = min(arr[i],mini*arr[i]);
        result = max(result,maxi);
    }
    cout<<"Maximum product subarray is: "<<result;
    return 0;
}