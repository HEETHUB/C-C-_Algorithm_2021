#include <stdio.h>

int main(void) {
    char c = 'h';

    putchar(c);
    putchar('h');
    putchar(104);

    c = getchar();
    putchar(c);
}