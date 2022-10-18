#include <stdio.h>

int main(int argc, char *argv[]){    
    char *input_filename = argv[1]; // name of input file
    char *output_filename = argv[2]; // name of output file
    // YOUR CODE HERE
    // fprintf the (num = ) first, start the for loop from i = 1 to i <= num, 
    // in each iteration, num should be divided by i until it couldn't be divided
    FILE *infile;
    FILE *outfile;
    int num[50];
    
    infile = fopen(input_filename, "r");
    outfile = fopen(output_filename, "w");

    while (fscanf(infile, "%d", num) != EOF) {
        int i = 2;
        char space = ' ';
        char equal = '=';
        char times = '*'; 
        char enter = '\n';

        fprintf(outfile, "%d", num[0]);
        fprintf(outfile, "%c", space);
        fprintf(outfile, "%c", equal);
        fprintf(outfile, "%c", space);
        
        while (i <= num[0]) {
            if (i == num[0]){
                fprintf(outfile, "%c", space);
                fprintf(outfile, "%d", i);
                num[0] /= i;
            }
            else if (num[0] % i == 0) {
                fprintf(outfile, "%c", space);
                fprintf(outfile, "%d", i);
                fprintf(outfile, "%c", space);
                fprintf(outfile, "%c", times);
                num[0] /= i;
            }
            else if (num[0] % i != 0) 
                i += 1;
        }
        fprintf(outfile, "%c", enter);
        }

    return 0;
}
