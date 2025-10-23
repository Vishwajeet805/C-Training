#include <stdio.h>
#include <string.h>

int main() {
    int n = 9;  
    char str[100] = "1";  
        char temp[100];
    
    for (int term = 1; term < n; term++) {
        int len = strlen(str);
        int count = 1;
        int k = 0;
        
        for (int i = 1; i <= len; i++) {
            if (str[i] == str[i - 1]) {
                count++;
            } else {
                temp[k++] = count + '0'; 
                temp[k++] = str[i - 1];  
                count = 1;               
            }
        }
        temp[k] = '\0'; 
        strcpy(str, temp);
        printf("Term %d = %s\n", term, str);
    }

    
    return 0;
}
