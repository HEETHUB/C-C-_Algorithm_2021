#include <stdio.h>
#define STUDENT_NUMS 5

int main(void) {
    int midterm[STUDENT_NUMS];
    int final[STUDENT_NUMS];
    int total[STUDENT_NUMS];

    // Input exam scores
    for (int i=0; i < STUDENT_NUMS; i++) {
        printf("Input midterm score for student %d: ", i);
        scanf("%d", &midterm[i]);
        printf("Input final score for student %d: ", i);
        scanf("%d", &final[i]);
    }

    // Calculate total scores
    for (int i=0; i < STUDENT_NUMS; i++) {
        total[i] = midterm[i] + final[i];
    }

    // Output the total scores
    for (int i=0; i < STUDENT_NUMS; i++) {
        printf("Total score for Student %d is %d\n", i, total[i]);
    }

    return 0;
}