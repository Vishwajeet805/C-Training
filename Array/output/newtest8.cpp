//49. Copy contents of one file to another
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    ofstream fout("copy.txt");
    char ch;

    while(fin.get(ch)) {
        fout << ch;
    }

    fin.close();
    fout.close();
    // main0();
    // main1();
    // main2();
    return 0;
}

//50. Count characters, words, and lines in a file

// int main0() {
//     ifstream fin("data.txt");
//     char ch;
//     int characters = 0, words = 0, lines = 0;

//     while(fin.get(ch)) {
//         characters++;
//         if(ch == ' ' || ch == '\n')
//             words++;
//         if(ch == '\n')
//             lines++;
//     }

//     fin.close();

//     cout << "Characters: " << characters << endl;
//     cout << "Words: " << words + 1 << endl;
//     cout << "Lines: " << lines + 1 << endl;

//     return 0;
// }

// //51. Append data to an existing file (Extra – //Intermediate)

// int main1() {
//     ofstream fout("data.txt", ios::app);
//     fout << "\nThis line is appended.";
//     fout.close();
//     return 0;
// }

// //52. Search a word in a file (Extra – Intermediate)

// int main2() {
//     ifstream fin("data.txt");
//     string word, search;
//     cin >> search;
//     int count = 0;

//     while(fin >> word) {
//         if(word == search)
//             count++;
//     }

//     cout << "Occurrences: " << count;
//     fin.close();
//     return 0;
// }
