#include <iostream>
using namespace std;

int main() {
    int a[] = {8, 4, 2, 1};
    int n = 4, count = 0;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) count++;

    cout << count;
}
