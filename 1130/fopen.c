#include <stdio.h>

int main(void) {
    FILE* input;
    FILE* output;
    char str[50];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    while (fscanf(input, "%s", str) != EOF) {
        printf("%s\n", str);
        fprintf(output, "%s\n", str);
    }

    fclose(input);
    fclose(output);
}