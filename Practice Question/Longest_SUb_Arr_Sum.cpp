#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {10, 5, 2, 7, 1, 9};
    int n = 6, k = 15, sum = 0, ans = 0;
    unordered_map<int,int> mp;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) ans = i + 1;
        if (mp.count(sum - k))
            ans = max(ans, i - mp[sum - k]);
        if (!mp.count(sum)) mp[sum] = i;
    }
    cout << ans;
}
