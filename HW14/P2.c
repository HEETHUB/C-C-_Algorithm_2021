#include <stdio.h>

int main(int argc, char *argv[]){
    char *input_filename = argv[1]; // name of input file
    // YOUR CODE HERE
    FILE *filePtr;
    int num[50];
    int result = 0;

    filePtr = fopen(input_filename, "r");
    if (filePtr == NULL)
        printf("fopen error!\n");
    while (fscanf(filePtr, "%d", num) != EOF){
        result += num[0];
    }
    printf("%d", result);
    return 0;
}
