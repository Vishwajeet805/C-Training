#include <iostream>
using namespace std;
int main(){
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"Boundary traversal: ";
    for(int i=0;i<4;i++) cout<<a[0][i]<<" ";
    for(int i=1;i<4;i++) cout<<a[i][3]<<" ";
    for(int i=2;i>=0;i--) cout<<a[3][i]<<" ";
    for(int i=2;i>0;i--) cout<<a[i][0]<<" ";
    cout<<endl;
    return 0;
}
