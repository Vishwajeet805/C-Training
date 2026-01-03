#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {2, 7, 11, 15};
    int n = 4, target = 9;
    unordered_map<int,int> mp;

    for (int i = 0; i < n; i++) {
        if (mp.count(target - a[i])) {
            cout << mp[target - a[i]] << " " << i;
            break;
        }
        mp[a[i]] = i;
    }
}
