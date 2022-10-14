#include <stdio.h>
#include <unistd.h>


int main(void) {
    char c = 'h';

    putchar('s');

    sleep(5);

    putchar('s');
    putchar('\n');
    return 0;
} // First 's' and second 's' are buffered until \n is pressed

struct studentType {
    char name[10];
    int midterm;
    int final;
    int total;
}; // Similar to nut different from class in that it does not habe 'methods'

