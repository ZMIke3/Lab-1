#include <stdio.h>
#include <math.h>

int main(){

    float input = 0.0;
    char op;


     for(int i = 0; i < 11; i++){
        // accepts number
        printf("Give me a number: ");
        scanf("%f", &input);
        getchar();
        //accepts operation
        printf("Give me a operation (e.g., e, /, r, m): ");
        scanf("%c", &op);

        //selects the right operation and prints out the result
        switch(op){
        case 'e':
            printf("Result: %f\n", exp(input));
            break;
        case '/':
            printf("Result: %f\n", log(input));
            break;
        case 'r':
            printf("result: %f\n", sqrt(input));
            break;
        case 'm':
            printf("Result: %d\n", abs(input));
            break;
            }
        }

    return 0;
}