#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";

    size_t length = strlen(str);

    printf("La cadena es: '%s'\n", str);
    printf("La longitud de '%s' es: %zu\n", str, length);

    return 0;
}
