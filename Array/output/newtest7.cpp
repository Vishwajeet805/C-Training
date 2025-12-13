#include <iostream>
#include <fstream>
using namespace std;
// C++ File Handling - Reading from a File
int main() {
    ifstream fin("data.txt");
    char ch;
    while(fin.get(ch)) {
        cout << ch;
    }
    fin.close();
    return 0;
}
