#include <stdio.h>

#define STUDENT_NUMS 2

struct studentType {
    char name[50];
    int ID;
    int midterm;
    int final;
    int total;
};

typedef struct studentType Student;

void calculateTotal(Student *s);

int main(void) {
    // Declare an array of structures
    Student s[STUDENT_NUMS];

    //Receive input from the keyboard for each student
    for (int i = 0; i < STUDENT_NUMS; i++) {
        printf("Student #%d", i);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("ID: ");
        scanf("\n%d", &s[i].ID);
        printf("midterm: ");
        scanf("\n%d", &s[i].midterm);
        printf("final: ");
        scanf("\n%d", &s[i].final);
    }

    // Calculate total score (sum) of each student
    for (int i = 0; i < STUDENT_NUMS; i++)
        calculateTotal(&s[i]);
    //Print each student's total score
    for (int i = 0; i < STUDENT_NUMS; i++) {
        printf("%d\n", s[i].total);
    }
    return 0;
}

// Define calculate Total
void calculateTotal(Student *s) {
    s->total = s->midterm + s->final;
}