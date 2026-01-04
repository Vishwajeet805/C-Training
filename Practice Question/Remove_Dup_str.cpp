#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "programming";
    bool seen[256] = {false};

    for (char c : s) {
        if (!seen[c]) {
            cout << c;
            seen[c] = true;
        }
    }
}
