#include <stdio.h>
#include <math.h>

#define NUM 600851475143

int isPrime (long long int a);

int main (void) {

    long long int biggest = 0;

    for (size_t i = 3; i < (size_t) sqrtl( (long double) NUM ); i +=2) {

        if (NUM % i == 0 && isPrime(i) )
            biggest = i;

    }

    printf("Biggest prime is %lld\n", biggest);

    return 0;

}

int isPrime (long long int a) {

    size_t limit = (size_t) sqrtl( (long double) a );

    if (a % 2 == 0) {
        return 0;
    }

    for (size_t i = 3; i <= limit; i += 2) {

        if (a % i == 0) {
            return 0;
        }

    }

    return 1;

}
