#include <stdio.h>

int main (void) {

    long long int curNum = 1;

    for (size_t i = 1; i <= 20; i++) {

        if (curNum % i != 0) {
            curNum++;
            i = 1;
        }

    }

    printf("Answer is %lld\n", curNum);

    return 0;

}
