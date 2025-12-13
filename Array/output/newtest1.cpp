#include <iostream>
using namespace std;
//4. Remove Duplicates from Array
int main() {
    int n;
    cin>>n;
    int a[n], temp[n], k=0;

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<k;j++){
            if(a[i]==temp[j]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            temp[k++]=a[i];
    }

    for(int i=0;i<k;i++) cout<<temp[i]<<" ";
}
