#include <stdio.h>
int main()
{
    char d,alphabet;

    printf("Enter an alphabet: ");
    scanf("%c",&d);
    alphabet=(d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
    if (alphabet)
        printf("%c is a vowel.", d);
    else
        printf("%c is a consonant.", d);
    return 0;
}
