#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int P4(int n);

// Implement P4 
// You can define other function, but P4 must return answer.
int P4(int n){
    int x = n+1;
    bool selfNum = false;
    while (selfNum == false){
        for (int i = 1; i < x; i++){
            int total = i;
            int i2 = i;
            while (i2 >= 1){
                total += i2 % 10;
                i2 /= 10;
            }
            if (total == x)
                break;

            if (i == x-1){
                if (total != x){
                    selfNum = true;
                    return x;
                }
            }
        }
        x += 1;
    }


    return 0;
}


// DO NOT MODIFY BELOW!
int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int ans = P4(n);

    printf("%d\n", ans);

    return 0;
}