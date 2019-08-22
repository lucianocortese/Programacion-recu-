#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    char sexoAlto;
    char cont='s';
    float altura;
    float alto=0;
    float alturaMayor=0;
    float sumaAlturaHombres;
    float promedioAlturaHombres=0;
    float alturaJoven;
    int edad;
    int edadBajo;
    int menor=0;
    int mayor=0;
    int contador=0;
    int contadorHombres=0;
    int sumaEdad=0;
    int edadPromedio;


    do{

        do{

            printf("Que edad tiene?(entre 1 y 115)\n");
            scanf("%d", &edad);
        } while(edad<=1&&edad>=115);

        do{
            printf("Cuanto mide?(entre 1 y 2)\n");
            scanf("%f", &altura);
        }while (altura<=1&&altura>=2);

        do{
            printf("Cual es su sexo?\n");
            setbuf(stdin, NULL);
            scanf("%c", &sexo);
        }while (sexo!='f'&& sexo !='m');

        if(edad>mayor && sexo=='f'){

            mayor=edad;
            alturaMayor=altura;
        }

        if(edad<menor || menor==0 ){

            mayor=edad;
            alturaJoven=altura;
        }

        if(altura>alto){

            alto=altura;
            sexoAlto=sexo;
        }
        if((alto==0 || altura<alto)&& sexo=='m'){

            alto=altura;
            edadBajo=edad;
        }

        if (sexo=='m'){
        contadorHombres++;
        sumaAlturaHombres=sumaAlturaHombres+altura;
        }

        printf("Presione n para salir\n");
        setbuf(stdin, NULL);
        //__fpurge(stdin);
        scanf("%c", &cont);
        scanf("%c", &cont);

        sumaEdad=sumaEdad+edad;
        contador++;

    }while(cont!='n');

    edadPromedio=sumaEdad/contador;
    promedioAlturaHombres=sumaAlturaHombres/contadorHombres;


    if(alturaMayor!=0){

        printf("La señora mayor mide: %.2f\n", alturaMayor);
    }

    printf("La persona menor mide: %.2f\n", alturaJoven);

    printf("La persona mas alta es del sexo: %c\n", sexoAlto);

    printf("El hombre mas bajo tiene: %d\n", edadBajo);

    printf("La altura promedio de hombres es %.2f", promedioAlturaHombres);

    printf("La edad promedio es %d", edadPromedio);

    setbuf(stdin,NULL);
    getchar();




    /*sexo='F';
    altura=1.69;
    edad=13;


    if(edad<=13){

        printf("La persona es menor\n");
    }
    else{

        if(edad>13 && edad<18){

            printf("La persona es adolescente\n");

        }
        else{
            printf("Es une tipe grande\n");
        }
    }

    printf ("Su edad es %d, su altura es %.2f, y su sexo es %c \n\n\n", edad, altura, sexo);

    setbuf(stdin, NULL);
    getchar();
*/
    return 0;
}
