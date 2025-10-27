#include <iostream>
#include <stack>
using namespace std;
int maxHist(int row[],int n){
    stack<int> s;
    int max_area=0,tp,area;
    int i=0;
    while(i<n){
        if(s.empty()||row[s.top()]<=row[i]) s.push(i++);
        else{
            tp=s.top(); s.pop();
            area=row[tp]*(s.empty()?i:i-s.top()-1);
            max_area=max(max_area,area);
        }
    }
    while(!s.empty()){
        tp=s.top(); s.pop();
        area=row[tp]*(s.empty()?i:i-s.top()-1);
        max_area=max(max_area,area);
    }
    return max_area;
}
int main(){
    int R=4,C=4;
    int M[4][4]={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int result=maxHist(M[0],C);
    for(int i=1;i<R;i++){
        for(int j=0;j<C;j++){
            if(M[i][j]) M[i][j]+=M[i-1][j];
        }
        result=max(result,maxHist(M[i],C));
    }
    cout<<"Maximum size rectangle = "<<result<<endl;
    return 0;
}
