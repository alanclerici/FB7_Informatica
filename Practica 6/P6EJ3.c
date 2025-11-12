#include<stdio.h>

int maximo(float Arr[5]){
    int pos_max = 0;
    for(int i = 1; i < 5; i++){
        if(Arr[i] > Arr[pos_max]){
            pos_max = i;
        }
    }
    return pos_max;
}

int main(){
    float T[5];
    int posicion;
    for(int i = 0; i < 5; i++){
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%f", &T[i]);
    }
    posicion = maximo(T);
    printf("El valor maximo es %.2f y se encuentra en la posicion %d\n", T[posicion], posicion + 1);

    return 0;
}