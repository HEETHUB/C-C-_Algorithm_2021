#include <stdio.h>

int main(void)
{
    int operand1, operand2;
    int result = 0;
    char operation;

    printf("Enter first operand: ");
    scanf("%d", &operand1);
    printf("Enter operation to perform (+,- ,*,/): ");
    scanf("\n%c", &operation);
    printf("Enter second operand: ");
    scanf("%d", &operand2);

    switch(operation){
        case '+' :
            result = operand1 + operand2;
            break;

        case '-' :
            result = operand1 - operand2;
            break;
        
        case '*' :
            result = operand1 * operand2;
            break;
        
        case '/' :
            if (operand2 != 0)
                result = operand1 / operand2;
            else 
                printf("Invalid operation!");
            break;
        
        default :
            printf("Invalid operation!");
     }
    printf("The answer is %d\n", result);
}