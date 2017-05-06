#include <stdio.h>
#include <math.h>

int isPrime (long long int a);

int main (void) {

    long long int curPrime = 3;

    for (size_t i = 2; i <= 10001; curPrime += 2) {

        if ( isPrime(curPrime) ) {
            printf ("%d: %d is prime\n", i, curPrime);
            i++;
        }

    }

    curPrime -= 2;

    printf("10001st is %lld\n", curPrime);

    return 0;

}

int isPrime (long long int a) {

    size_t limit = (size_t) sqrtl( (long double) a );

    for (size_t i = 3; i <= limit; i += 2) {

        if (a % i == 0) {
            return 0;
        }

    }

    return 1;

}
