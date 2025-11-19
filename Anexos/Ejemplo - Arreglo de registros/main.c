// El enunciado se encuentra en esta misma carpeta en
// el archivo "Resolucion.txt". Ahi puede encontrar la resolucion
// en pseudocodigo para lectura por teclado.
// Por simplicidad, la lectura de los datos en este ejemplo se 
// realiza desde un archivo de texto llamado "dni_legajos.txt"

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float dni;
    char legajo[9];
} Alumno;

int BUSCAR(Alumno alumnos[30], float dni_buscado){
    int pos = 0;
    while (alumnos[pos].dni != dni_buscado && pos < 30){
        pos++;
    }
    if (pos>29){
        return -1;
    } else {
        return pos;
    }
}

int main(void){
    FILE *f;
    Alumno alumnos[30];
    int cant = 0, res;
    float dni_ingresado;

    f = fopen("dni_legajos.txt", "r");
    if (f == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    while (!feof(f)){
        fscanf(f, "%f %s", &alumnos[cant].dni, alumnos[cant].legajo);
        cant++;
    }
    fclose(f);

    printf("Ingrese un DNI para buscar el legajo correspondiente (0 para salir): ");
    scanf("%f", &dni_ingresado);
    while (dni_ingresado != 0){
        res = BUSCAR(alumnos, dni_ingresado);
        if (res != -1){
            printf("El legajo correspondiente al DNI %.0f es: %s\n", dni_ingresado, alumnos[res].legajo);
        } else {
            printf("No se encontró un legajo para el DNI %.0f\n", dni_ingresado);
        }
        printf("Ingrese otro DNI para buscar (0 para salir): ");
        scanf("%f", &dni_ingresado);
    }
    return 0;
}  
    
