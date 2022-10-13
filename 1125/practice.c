#include <stdio.h>

int main(void) {
    int *intPtr;
    int intVariable = 10;

    intPtr = &intVariable;
    printf("%d", *intPtr);
}