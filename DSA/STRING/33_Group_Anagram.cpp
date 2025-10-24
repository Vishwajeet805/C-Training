#include <iostream>
using namespace std;

int main() {
    string strs[6] = {"eat","tea","tan","ate","nat","bat"};
    bool visited[6] = {false};

    for(int i = 0; i < 6; i++) {
        if(visited[i]) continue;

        // Bubble sort current string
        string sorted_i = strs[i];
        for(int x = 0; x < sorted_i.length() - 1; x++) {
            for(int y = 0; y < sorted_i.length() - x - 1; y++) {
                if(sorted_i[y] > sorted_i[y + 1]) {
                    char temp = sorted_i[y];
                    sorted_i[y] = sorted_i[y + 1];
                    sorted_i[y + 1] = temp;
                }
            }
        }

        cout << "Group: " << strs[i] << " ";
        visited[i] = true;

        for(int j = i + 1; j < 6; j++) {
            if(visited[j]) continue;
            string sorted_j = strs[j];
            for(int x = 0; x < sorted_j.length() - 1; x++) {
                for(int y = 0; y < sorted_j.length() - x - 1; y++) {
                    if(sorted_j[y] > sorted_j[y + 1]) {
                        char temp = sorted_j[y];
                        sorted_j[y] = sorted_j[y + 1];
                        sorted_j[y + 1] = temp;
                    }
                }
            }

            bool same = true;
            if(sorted_i.length() != sorted_j.length()) same = false;
            else {
                for(int k = 0; k < sorted_i.length(); k++)
                    if(sorted_i[k] != sorted_j[k]) same = false;
            }

            if(same) {
                cout << strs[j] << " ";
                visited[j] = true;
            }
        }
        cout << endl;
    }
}
