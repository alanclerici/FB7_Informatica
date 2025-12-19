#include <stdio.h>

int main() {
    FILE *archivo;
    char codigo[5], descripcion[50];
    int longitud;

    archivo = fopen("rutas_santafe.txt", "r");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    while (!feof(archivo)) {
        fscanf(archivo, "%s %s %d", codigo, descripcion, &longitud);
        printf("%s %s %d\n", codigo, descripcion, longitud);
    }

    fclose(archivo);
    return 0;
}
