#include <stdio.h>

int main(){

    float result = 0.0;
    float input;

    while(1){
        // just accepts a number and prints the sum of number and result. Result starts at zero
        printf("Give me a number: ");
        scanf("%f", &input);

        printf("input: %.1f\n", input);
        printf("result:  %.1f + %.1f = %.1f\n", result, input, result + input);
        result = result + input; // updates result
      

    }
    return 0;
}