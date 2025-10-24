#include <iostream>
using namespace std;

int main() {
    string s = "aaabbc";
    string result = "";
    int n = s.length();

    for(int i = 0; i < n; i++) {
        int count = 1;
        while(i + 1 < n && s[i] == s[i + 1]) {
            i++;
            count++;
        }
        result += s[i];

        if(count > 1) {
            int temp = count;
            string num = "";
            while(temp > 0) {
                char digit = (temp % 10) + '0';
                num = digit + num;
                temp /= 10;
            }
            result += num;
        }
    }
    cout << result; 
}
