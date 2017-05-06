#include <stdio.h>
#define MAX 4000000

int main (void) {

    long int term1, term2;
    long long int sum = 0;

    term1 = 1;
    term2 = 2;

    while (term1 < MAX && term2 < MAX) {

        if (term1 % 2 == 0)
            sum += term1;

        term1 += term2;

        if (term2 % 2 == 0)
            sum += term2;

        term2 += term1;

    }

    printf ("Sum is %lld\n", sum);

    return 0;

}
