#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[3][3]={{1,3,5},{2,6,9},{3,6,9}};
    int n=3,m=3;
    int temp[9],k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[k++]=a[i][j];
        }
    }
    sort(temp,temp+k);
    cout<<"Median = "<<temp[(n*m)/2]<<endl;
    return 0;
}

