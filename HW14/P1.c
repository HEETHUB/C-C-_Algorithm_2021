#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int N = atoi(argv[1]);
    // YOUR CODE HERE
    // (N-i) spaces before and after stars
    // 2*i-1 stars 
    for (int i = 1; i <= N; i++) {
        int numSpace = N - i;
        int numStar = 2*i - 1;
        for (int j = 1; j <= numSpace; j++) {
            putchar(' ');
        }
        for (int k = 1; k <= numStar; k++) {
            putchar('*');
        }
        for (int l = 1; l <= numSpace; l++) {
            putchar(' ');
        }
        putchar('\n');
        }
    return 0;
}