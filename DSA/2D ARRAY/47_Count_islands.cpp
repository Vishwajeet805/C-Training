#include <iostream>
using namespace std;
int n=4,m=5;
int a[4][5]={{1,1,0,0,0},{0,1,0,0,1},{1,0,0,1,1},{0,0,0,0,0}};
bool vis[4][5]={0};
void dfs(int i,int j){
    if(i<0||j<0||i>=n||j>=m||a[i][j]==0||vis[i][j]) return;
    vis[i][j]=true;
    dfs(i+1,j); dfs(i-1,j); dfs(i,j+1); dfs(i,j-1);
    dfs(i+1,j+1); dfs(i-1,j-1); dfs(i-1,j+1); dfs(i+1,j-1);
}
int main(){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1 && !vis[i][j]){
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<"Number of islands = "<<count<<endl;
    return 0;
}
