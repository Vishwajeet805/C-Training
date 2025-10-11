#include <stdio.h>
int main()
{
    char words;
    printf("Enter a character: ");
    scanf("%c", &words );
    if (words == 'a'|| words == 'e'||words == 'i'||words == 'o'||words == 'u'||words == 'A'||words == 'E'||words == 'I'||words == 'O'||words == 'U')
        printf("%c is a vowel.\n", words);
    else
        printf("%c is a consonant.\n", words);
}