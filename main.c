#include <stdio.h>

unsigned long collatz(unsigned long n) {
    unsigned long count = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main() {
    unsigned long i, count = 0;

    for (i = 1; ; i++) {
        unsigned long sequenceLength = collatz(i);
        count++;
        
        if (count % 100000000 == 0) {
            printf("Números probados: %lu\n", count);
        }
    }
    
    return 0;
}
