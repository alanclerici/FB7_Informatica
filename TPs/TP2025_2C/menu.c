#include<stdio.h>

void informacion_menu(){
    printf("Menu TP 2025\n");
    printf("Opcion 1\n");
    printf("Opcion 2\n");
    printf("Opcion 3\n");
    printf("Opcion 4\n");
    printf("Cero para salir\n");
    printf("Ingrese una opcion: ");
}

void validacion(int *opc){
    while( (*opc)<0 || (*opc)>4 ){
        printf("Ingrese un valor correcto: ");
        scanf("%d",&*opc);
    }
}

int main(){
    int op;
    informacion_menu();
    scanf("%d",&op);
    validacion(&op);
    while(op != 0){
        switch(op){
            case 1:
                printf("Se eligio la opcion 1\n");
                break;
            case 2:
                printf("Se eligio la opcion 2\n");
                break;
            case 3:
                printf("Se eligio la opcion 3\n");
                break;
            case 4:
                printf("Se eligio la opcion 4\n");
                break;
        }
    informacion_menu();
    scanf("%d",&op);
    validacion(&op);
    }
    return 0;
}
