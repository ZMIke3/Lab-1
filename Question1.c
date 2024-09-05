#include <stdio.h>

int main(){

    printf("Question 1, First Part\n");

    printf("Hi. ESE124 /2024 \\ aaa #67 \"ggg\" mmm"); // First part of question, just prints out statement in print function
    printf("\n\n");
    printf("Question 1, Second Part\n\n");

    int input1, input2, input3; char c;
    while(1){
        //
        printf("Enter a date (e.g., 9/3/2024): ");
        scanf("%d/%d/%d", &input1, &input2, &input3); // acccepts user input in following format ##/##/####
        getchar();

        printf("Converted date:%02d-%02d-%04d\n", input1, input2, input3); // converts user input to following format ##-##-####

        // asks if user wants to continue any char apart from n continues while loop, n breaks out
        printf("Do you want to continue, y/n "); 
        scanf("%c", &c);
        getchar();
        
        if(c == 'n'){
            break;
        }else{
             printf("Enter another date (e.g., 9/3/2024): ");
        scanf("%d/%d/%d", &input1, &input2, &input3);
        getchar();

        }

       


    }
 }