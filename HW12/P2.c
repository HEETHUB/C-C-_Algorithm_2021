#include <stdio.h>
#include <stdlib.h>

int P2(int n);

// Implement P2 
// You can define other function, but P2 must return answer.
int P2(int n){
    int result = 0;
    while(n >= 1){
        result += n % 10;
        n /= 10;
    }
    return result;

    return 0;
}


// DO NOT MODIFY BELOW!
int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int ans = P2(n);

    printf("%d\n", ans);

    return 0;
}