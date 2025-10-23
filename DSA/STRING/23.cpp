#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string str="dad";
    int n=str.length();
    string result="";
    for (int i=0;i<n;i++){
        int j;
        for (j=0;j<result.length();j++){
            if(str[i]==result[j])
                break;
        }
        if(j==result.length())
         result +=str[i];
    }
    cout <<"Updated string :"<<result;
    return 0;
}