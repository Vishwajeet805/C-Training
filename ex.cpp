#include <string.h>
int main(){

    strlen(str) → string length
    strcpy(dest, src) → copy string
    strcat(str1, str2) → concatenate strings
    strcmp(str1, str2) → compare
}
Array index 0 se start hota hai.

Agar array size 5 hai, toh index 0–4 tak hoga.
🔹 Syntax of a Function
return_type function_name(parameters) {
    // statements
    return value;
}
1. Simple Function without Parameters
#include <stdio.h>

void greet() {   // no return, no parameter
    printf("Hello, Welcome to C Functions!\n");
}

int main() {
    greet(); // function call
    return 0;
}


Output:

Hello, Welcome to C Functions!
Function banane se program chhote-chhote modules me divide ho jata hai.

Function declaration (prototype) zaroori hai agar function main() ke baad likha ho.

Recursive function me ek base condition zaroori hai, warna infinite loop ho jayega.

1. Simple Function without Parameters
#include <stdio.h>

void greet() {   // no return, no parameter
    printf("Hello, Welcome to C Functions!\n");
}

int main() {
    greet(); // function call
    return 0;
}


Output:

Hello, Welcome to C Functions!

2. Function with Parameters
#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main() {
    add(10, 20);  // function call with arguments
    add(50, 70);
    return 0;
}


Output:

Sum = 30
Sum = 120

3. Function with Return Value
#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num = 6;
    printf("Square of %d = %d", num, square(num));
    return 0;
}


Output:

Square of 6 = 36

4. Function with Recursion

Recursion = jab ek function khud ko call kare.

Example: Factorial

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}


Output:

Factorial of 5 = 120
🔹 Pointers

Pointer ek variable hota hai jo memory address store karta hai, na ki actual value.

Matlab pointer ke andar dusre variable ka address hota hai, jise use karke hum us variable ko access ya modify kar sakte hain.

🔹 Syntax
data_type *pointer_name;


data_type → pointer jis type ke variable ko point karega.

* → isse pointer declare hota hai.

pointer_name → pointer ka naam.

Example:

int a = 10;       // normal integer variable
int *p;           // pointer variable
p = &a;           // p me a ka address store kar diya

🔹 Operators

& (Address-of operator)

Kisi variable ka memory address lene ke liye use hota hai.

int x = 5;
int *ptr = &x;  // ptr ab x ka address store karega


* (Dereference operator)

Pointer ke through original variable ki value access karne ke liye use hota hai.

int y = *ptr;  // y me x ki value aa gayi
*ptr = 20;     // x ki value ab 20 ho gayi

🔹 Example
#include <stdio.h>

int main() {
    int num = 50;
    int *ptr = &num;  // pointer num ka address store karega

    printf("Address of num: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    *ptr = 100;  // num ki value change ho gayi
    printf("Updated value of num: %d\n", num);

    return 0;
}


Output:

Address of num: 0x7ffee3b9c9ac
Value of num using pointer: 50
Updated value of num: 100

🔹 Key Points

Pointer se memory ka direct access possible hota hai.

Dynamic memory allocation aur arrays ke sath pointer kaafi useful hai.

Pointer ke bina linked list, trees, aur complex data structures implement karna mushkil hota hai.
**Code:**
#include <stdio.h>
#include <conio.h>






for(int i = 0 ; i <=7 ; i++ ) 
{
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 7; j >i; j--)
        {
            printf("  ");
        }
       for (int j = 7; j >i; j--)
        {
            printf("  ");
        }
         for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
 for(int i = 0 ; i <=7 ; i++ ) 
    {
        for (int j = 7; j >i; j--)
        {
            printf("* ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 7; j >i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
output 
* 
* *                         *
* * *                     * *
* * * *                 * * *
* * * * *             * * * *
* * * * * *         * * * * *
* * * * * * *     * * * * * *
* * * * * * * * * * * * * * *
* * * * * * *   * * * * * * *
* * * * * *       * * * * * * 
* * * * *           * * * * *
* * * *               * * * *
* * *                   * * *
* *                       * *
*                           *
for(int i=1;i<=5;i++){
    for (int j=1;j<=5;j++ )
{
    (i==1||i==5||j==1||j==5)?printf("* "):printf("  ");
}printf("\n");
}
}
output
* * * * * 
*       *
*       *
*       *
* * * * *
