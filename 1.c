#include <stdio.h>

#define MAX 1000

int main (void) {

    long long int sum = 0;

    for (size_t i = 1; i < MAX; i++) {

        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    }

    printf ("Sum is %lld\n", sum);

    return 0;

}
