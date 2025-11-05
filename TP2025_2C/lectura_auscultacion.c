#include <stdio.h>

int main() {
    FILE *archivo;
    char codigo[5];
    int km_inicio, km_fin, FL, FM, A, B;

    archivo = fopen("auscultacion.txt", "r");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    while (!feof(archivo)) {
        fscanf(archivo, "%s %d %d %d %d %d %d", codigo, &km_inicio, &km_fin, &FL, &FM, &A, &B);
        printf("%s %d %d %d %d %d %d\n", codigo, km_inicio, km_fin, FL, FM, A, B);
    }

    fclose(archivo);
    return 0;
}
