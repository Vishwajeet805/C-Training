#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int x = 29;
    int i = 0, j = 3;
    bool found = false;
    while (i < 4 && j >= 0)
    {
        if (a[i][j] == x)
        {
            found = true;
            break;
        }
        else if (a[i][j] > x)
            j--;
        else
            i++;
    }
    if (found)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
