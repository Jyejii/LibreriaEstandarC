#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    if (fscanf(file, "%49[^\n]", buffer) != 1) {
        printf("Error al leer del archivo.\n");
        fclose(file);
        return 1;
    }

    printf("Leido del archivo: %s\n", buffer);
    fclose(file);

    return 0;
}

