#include <stdio.h>
#include <stdbool.h>
int main(void){
    bool prime = true;

    for (int num = 2; num <= 100; num++){
        prime = true;

        for (int divisor = 2; divisor <= 10; divisor++)
            if(((num%divisor) == 0) && num != divisor)
                prime = false;
        
        if (prime)
            printf("The number %d is prime\n", num);
    }
}
