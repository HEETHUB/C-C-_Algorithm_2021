#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *input_file;
    FILE *output_file;
    char *input_filename = argv[1];
    char *output_filename = argv[2];

    input_file = fopen(input_filename, "r");
    output_file = fopen(output_filename, "w");
    int num = 0;

    while (fscanf(input_file, "%d", &num) != EOF) {
        fprintf(output_file, "%d = ", num);
        while(1) {

            for (int i=2; i <= num; i++) {
                if (num % i == 0) {
                    fprintf(output_file, "%d", i);
                    num /= i;
                    break;
                }
            }
            if (num == 1) {
                fprintf(output_file, "%s", "\n");
                break;
            }
            else {
                fprintf(output_file, "%s", " * ");
            }
        }
    }
    fclose(input_file);
    fclose(output_file);

    return 0;
}