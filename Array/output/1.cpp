#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> key;

    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            cout<<"Found at "<<mid;
            return 0;
        }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    cout<<"Not Found";
}
