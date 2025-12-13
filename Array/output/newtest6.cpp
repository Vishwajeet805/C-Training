#include <iostream>
#include <fstream>
using namespace std;
// C++ File Handling - Writing to a File
int main() {
    ofstream fout("data.txt");
    fout << "C++ File Handling Example\n";
    fout << "Writing data into file";
    fout.close();
    return 0;
}
