#include <stdio.h>
#include <ctype.h>

int main(){

    char input;

    while (1)
    {
        // accepts a char
        printf("Give me a letter from the alphabet: ");
        scanf("%c", &input);
        getchar();

          // first checks if input is an alphabet then checks if input is vowel or consonant and then prints out ascii value of char
        if (!isalpha(input)) {
            printf("The character '%c' is not an alphabetic letter.\n", input);
        } else if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
        {
            printf("This is a vowel, in ACII it is: %d\n\n", input);
        }else{
            printf("This is a consonant, in ACII it is: %d\n\n", input);
        }
         
    } 

    return 0;
}