#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    bool row[3] = {0}, col[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (row[i] || col[j])
                a[i][j] = 0;
        }
    }
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
