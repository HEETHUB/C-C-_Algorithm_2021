#include <stdio.h>

int main(int argc, char *argv[]){    
    char *input_filename = argv[1]; // name of input file
    char *output_filename = argv[2]; // name of output file
    // YOUR CODE HERE
    FILE *infile;
    FILE *outfile;
    char num[50];
    
    infile = fopen(input_filename, "r");
    outfile = fopen(output_filename, "w");

    if (infile == NULL)
        printf("fopen error!\n");
    
    while (fscanf(infile, "%s", num) != EOF) {
        /* printf("%s\n", num);
        printf("%c\t", num[3]);
        printf("%c\t", num[7]); */
        for (int i = 10; i >= 3; i--) {
            num[i+1] = num[i];
        }
        for (int j = 11; j >= 8; j--) {
            num[j+1] = num[j];
        }
        num[3] = '-';
        num[8] = '-';
        num[13] = '\n';
        fprintf(outfile, "%s", num);
    }
    return 0;
}
