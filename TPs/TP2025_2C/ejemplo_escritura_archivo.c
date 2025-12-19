#include <stdio.h>

int main() {
    FILE *archivo;
    char texto[10] = "Ejemplo"; // Genero una cadena de caracteres de ejemplo
    int i;

    archivo = fopen("archivo_escrito.txt", "w");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    for(i=0;i<10;i++) {
        fprintf(archivo, "%s %d\n", texto, i);
        printf("%s %d\n", texto, i);
    }

    fclose(archivo);
    return 0;
}
