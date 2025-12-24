#include <iostream>
using namespace std;

int main() {
    int a[6] = {1,2,2,3,2,4};
    int key = 2, count = 0;

    for (int i = 0; i < 6; i++)
        if (a[i] == key) count++;

    cout << count;
}
