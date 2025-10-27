#include <iostream>
using namespace std;
int main(){
    int a[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=16;
    int n=3,m=4;
    bool found=false;
    int low=0,high=n*m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int val=a[mid/m][mid%m];
        if(val==target){found=true;break;}
        else if(val<target) low=mid+1;
        else high=mid-1;
    }
    if(found) cout<<"Element found"<<endl;
    else cout<<"Element not found"<<endl;
    return 0;
}
