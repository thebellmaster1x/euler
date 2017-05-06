#include <stdio.h>

typedef struct triple {

    int a;
    int b;
    int c;
    triple *next;

} triple;

int main (void) {

    triple *curTriple;

    triple *HEAD = malloc( sizeof(triple) );
    HEAD->a = 0;
    HEAD->b = 0;
    HEAD->c = 0;
    HEAD->next = null;

    curTriple = HEAD;

    for (size_t i = 1; i < 1000; i++) {

        for (size_t j = 1; j < 1000; j++) {

            for (size_t k = 1; k < 1000; k++) {

                if (i*i + j*j == k*k)
                    curTriple->next = initialize(curTriple, i, j, k);
                    // TODO

            }

        }

    }

    curTriple = HEAD;

}
