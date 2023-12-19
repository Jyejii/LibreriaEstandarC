#include <stdio.h>

int main() {
    const char *filename = "file.txt";
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("No se pudo abrir el archivo '%s'. \n", filename);
        return 1;
    }

    fclose(file);

    return 0;
}
