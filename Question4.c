#include <stdio.h>
#include <math.h>

int main(){

    int input = 0;
    int e_sum = 0;
    int o_sum = 0;
    char c = '#';

    // accepts a number
    printf("Give me a number: ");
    scanf("%d", &input);
    c = getchar();

    while( c != '#'){   

        // checks if number is even or odd and adds it to the right variable depending on if it's even or odd
        if(input % 2 == 0){
            e_sum  +=input;
        }else{
            o_sum +=input;
        }

        // prints out the even and odd sums
        printf("\n\n");
        printf("This is the even sum: %d\n", e_sum);
        printf("This is the odd sum:  %d\n", o_sum);

        // accepts a number
        printf("Give me a number: ");
        scanf("%d", &input);

        // hunts for the #
        c = getchar();

    }


    return 0;

}