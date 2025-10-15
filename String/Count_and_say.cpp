#include <iostream>
using namespace std;

string countAndSay(int n) {
    string res = "1";
    for (int i = 2; i <= n; i++) {
        string temp = "";
        int count = 1;
        for (int j = 1; j <= res.length(); j++) {
            if (j < res.length() && res[j] == res[j - 1])
                count++;
            else {
                temp += to_string(count) + res[j - 1];
                count = 1;
            }
        }
        res = temp;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Count and Say: " << countAndSay(n);
}
