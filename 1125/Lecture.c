#include <stdio.h>

void newSwap(int *firstVal, int *secondVal);

int main(void) {
    int valA = 7;
    int valB = 5;
    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);
    newSwap(&valA, &valB);
    printf("After Swap: valA = %d, valB = %d\n", valA, valB);
    return 0;
}

void newSwap(int *firstVal, int *secondVal) {
    int tempVal;
    tempVal = *firstVal;
    *firstVal = *secondVal;
    *secondVal = tempVal;
    printf("In Swap: firstVal = %d, secondVal = %d\n", *firstVal, *secondVal);
}