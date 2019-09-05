#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

int main()
{
    int vidas;
    int largo;
    char* palabra;
    char letra;
    int acertado[largo];

    palabra=(char*)malloc(25);

    printf("   AHORCADO   \n");

    printf("Con cuantas vidas desea jugar?\n\n");
    scanf("%d", &vidas);


    printf("Ustéd jugara con %d vidas\n\n", vidas);

    setbuf(stdin, NULL);


    //
    getchar();
    printf("\e[2J\e[H");
//////////////////////ELEGIR PALABRA/////////////////
    setbuf(stdin, NULL);
    getString(palabra, "Elija una palabra", "Esa palabra es muy larga", 1, 25);
    largo=strlen(palabra);


    //
    getchar();
    printf("\e[2J\e[H");
////////////////////////////////CUANTAS VIDAS/////////////////////////////////////////
    printf("Vidas: %d\n\n", vidas);

    for (int i=0;i<largo;i++)
    {
        printf("_ ");

   }
   printf("\n\n\nElija una letra: ");
   scanf("%c", letra);

////////////////////////


    for (int i=0; i<largo;i++){

    if(letra == *(palabra+i)){



    }

    }


    return 0;

}
