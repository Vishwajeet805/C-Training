#include <iostream>
#include <stack>
using namespace std;
// Reverse a String using Stack
int main(){
    string s;
    cin>>s;
    stack<char> st;

    for(char c:s) st.push(c);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
