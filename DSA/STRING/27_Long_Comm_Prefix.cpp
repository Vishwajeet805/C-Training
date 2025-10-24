#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    string words[100];
    cout << "Enter " << n << " words:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    string prefix = words[0];

    for (int i = 1; i < n; i++)
    {
        int j = 0;

        while (j < prefix.size() && j < words[i].size() && prefix[j] == words[i][j])
        {
            j++;
        }
        prefix = prefix.substr(0, j);
    }

    cout << "Longest Common Prefix: " << prefix << endl;
    return 0;
}
