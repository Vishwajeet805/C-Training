#include <stdio.h>

int main() {
    char str[20];
    int num = 0, i = 0, sign = 1;

    printf("Enter a number string: ");
    scanf("%s", str);

  
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0'); 
        i++;
    }

    num = num * sign;

    printf("Converted Integer = %d\n", num);
    return 0;
}
