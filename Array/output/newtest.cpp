#include <iostream>
#include <map>
using namespace std;
//3. Count Frequency Using Map
int main() {
    int n;
    cin>>n;
    int a[n];
    map<int,int> freq;

    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }

    for(auto i:freq)
        cout<<i.first<<" -> "<<i.second<<endl;
}
