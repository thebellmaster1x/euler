#include <stdio.h>

#define MAX 100

int main (void) {

    long long int sumSquare = 0;
    long long int squareSum = 0;

    // set sumSquare
    for (size_t i = 1; i <= MAX; i++) {
        sumSquare += i * i;
    }
    
    // set squareSum
    for (size_t i = 1; i <= MAX; i++) {
        squareSum += i;
    }

    squareSum *= squareSum;

    printf("Difference is %lld\n", squareSum - sumSquare);

    return 0;

}
