#include <iostream>
using namespace std;
//5. Longest Word in a String
int main() {
    char s[100];
    cin.getline(s,100);

    int maxLen=0, curr=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' ')
            curr++;
        else{
            if(curr>maxLen) maxLen=curr;
            curr=0;
        }
    }
    if(curr>maxLen) maxLen=curr;
    cout<<maxLen;
}
