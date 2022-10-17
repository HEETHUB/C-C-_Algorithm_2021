#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int P3(int n);

// Implement P3
// You can define other function, but P3 must return answer.
int P3(int n){
    int divisor;
    int x;
    int num = 0;

    for(x = n; x <= 2*n; x++) {
        int y;
        bool prime = true;
        for(y = 2; y < x; y++) {
            if (x % y == 0){
                prime = false;
                break;
            }
        }
        if (prime == true)
            num += 1;
        }
    return num;

    return 0;
}


// DO NOT MODIFY BELOW!
int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int ans = P3(n);

    printf("%d\n", ans);

    return 0;
}