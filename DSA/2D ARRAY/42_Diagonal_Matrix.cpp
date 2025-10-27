#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Primary diagonal: ";
    for (int i = 0; i < 3; i++)
        cout << a[i][i] << " ";
    cout << "\nSecondary diagonal: ";
    for (int i = 0; i < 3; i++)
        cout << a[i][3 - i - 1] << " ";
    cout << endl;
    return 0;
}
