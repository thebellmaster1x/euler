#include <stdio.h>
#include <string.h>

int isPalindrome (long int num);

int main (void) {

    long int biggestPal = 0;
    long int product;

    for (size_t i = 100; i < 1000; i++) {
        for (size_t j = i; j < 1000; j++) {
            
            product = i * j;

            if (isPalindrome(product) && product > biggestPal)
                biggestPal = product;

        }
    }

    printf("Biggest palindrome is %ld\n", biggestPal);

    return 0;

}

int isPalindrome (long int num) {

    char numStr[12];
    int length;

    sprintf(numStr, "%ld", num);
    length = strlen(numStr);

    for (size_t i = 0; i <= length / 2; i++) {

        if (numStr[i] != numStr[length - (i + 1)])
            return 0;

    }

    return 1;

}
