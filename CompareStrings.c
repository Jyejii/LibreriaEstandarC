#include <string.h>
#include <stdio.h>

int main() {
    const char *str1 = "Hola";
    const char *str2 = "Mundo";

    printf("Comparando las cadenas:\n");
    printf("Cadena 1: %s\n", str1);
    printf("Cadena 2: %s\n", str2);

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
