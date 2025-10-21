#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
    string str="jld";
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout <<"Reversed string - "<<str<<endl;
 return 0;
    
}