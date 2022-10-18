#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LEN 10

void print_unique_numbers(int* numbers, int n_integers);

int main(int argc, char* argv[]) {
    if (argc == 1) {
      printf("Please input at least 1 integer.\n");
    }

    int numbers[MAX_LEN];
    for (int i = 1; i < argc; ++i) {
        int tmp = atoi(argv[i]);
        numbers[i-1] = tmp;
    }
    print_unique_numbers(numbers, argc-1);

    return 0;
}
/* Do not modify above*/

void print_unique_numbers(int* numbers, int n_integers) {
    /*
    numbers: input integer array
    n_integers: length of 'numbers'
    */
    /* Write your code here */	
    for (int i = 0; i < n_integers; i++) {
        int a = 1;
        for (int j = i-1; j >= 0; j--) {
            if (numbers[j] == numbers[i]){
                a = 0;
                break;
            }
            }
        if (a == 1) {
            printf("%d\t", numbers[i]);
        }
        }
    }
