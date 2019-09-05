#include <stdio.h>
#include <stdlib.h>
#define MAX 6


void mostrarArray (int myArray[], int cantidad);
int mostrarMayor (int array[], int cantidad);

float darPromedio (int array[], int cantidad);

int main()
{
    int numero;
    int listadoDeEdades[MAX];
    int menor;
    int mayor;
    float promedio;
    cargaSecuencialDelArray(listadoDeEdades, MAX, "ingrese la edad");
    ordenarMayor(listadoDeEdades, MAX);
    mostrarArray(listadoDeEdades,MAX);
    ordenarMenor(listadoDeEdades,MAX);
    mostrarArray(listadoDeEdades,MAX);
    menor=darMenor(listadoDeEdades, MAX);
    mayor=darMayor(listadoDeEdades, MAX);
    promedio=darPromedio(listadoDeEdades,MAX);


    printf("\n\nEl promedio es %.2f", promedio);
    printf("\n\nEl numero mayor es %d", mayor);
    printf("\n\nEl numero menor es %d", menor);
}


void inicializador (int array[], int cantidad){

    for (int i=0; i<cantidad;i++){
    array[i]=0;
    }
}
void mostrarArray (int myArray[], int cantidad){
    for (int i=0; i<cantidad;i++){
        printf("%d\n", myArray [i]);
    }
}
int darMayor (int array[], int cantidad){

    int mayor;

    for (int i=0; i<cantidad;i++){
        if(array[i]>mayor || i==0){

            mayor=array[i];
        }
        }
    return mayor;
}
int darMenor (int array[], int cantidad){

    int menor;

    for (int i=0; i<cantidad;i++){
        if(array[i]<menor || i==0){

            menor=array[i];
        }
        }
    return menor;
}
void cargaSecuencialDelArray(int array[], int cantidad, char mensaje []){
    for (int i=0; i<cantidad;i++){
    printf(mensaje);
    scanf("%d",&array [i] );
    }
}
float darPromedio (int array[], int cantidad){

float acumulador=0;
float promedio=0;

for(int i=0; i<cantidad; i++){
    acumulador=acumulador+array[i];
}
promedio=acumulador/cantidad;

return promedio;

}
void ordenarMayor (int array [], int cantidad){
    int aux;
    for(int i=0; i<cantidad; i++){
        for (int j=0; j<cantidad; j++){
            if (array[i]> array[j]){
                aux = array[i];
                array[i]=array [j];
                array [j]=aux;
            }
        }
    }
}
void ordenarMenor (int array [], int cantidad){
    int aux;
    for(int i=0; i<cantidad; i++){
        for (int j=0; j<cantidad; j++){
            if (array[i]< array[j]){
                aux = array[i];
                array[i]=array [j];
                array [j]=aux;
            }
        }
    }
}

/* PRIMERA PRACTICA
int main()
{

    int numero;
    int listadoDeNumeros[3];
    numero=33;
    listadoDeNumeros[0]=66;

    for (int i=0; i<3;i++){

    listadoDeNumeros [i]=0;
    }


    for (int i=0; i<3;i++){
    printf("%d\n", listadoDeNumeros [i]);

    }
}
*/
