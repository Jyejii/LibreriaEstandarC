#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int i;

    srand(time(0));

    for (i = 0; i < 5; i++) {
        int random_number = rand();
        printf("Numero aleatorio con semilla %d: %d\n", i, random_number);
        srand(time(0) + i + 1);
    }

    return 0;
}
