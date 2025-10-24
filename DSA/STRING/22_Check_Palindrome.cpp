#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string str="dad";
    int n=str.length();
    int j=n-1;
    bool flag=true;
    int i=0;
    while(i<j){
        if(str[i]!=str[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    (flag)?cout<<"Palindrome":cout<<"Not Palindrome";
    cout <<endl;
 return 0;
    
}