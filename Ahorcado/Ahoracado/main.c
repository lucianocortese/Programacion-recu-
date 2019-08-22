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

    palabra=(char*)malloc(10);

    printf("   AHORCADO   \n");

    printf("Con cuantas vidas desea jugar?\n\n");
    scanf("%d", &vidas);


    printf("Ustéd jugara con %d vidas\n\n", vidas);

    setbuf(stdin, NULL);


    //
    getchar();
    printf("\e[2J\e[H");
/////////////////////////////////////////////////////////////////////////
    setbuf(stdin, NULL);
    getString(palabra, "Elija una palabra", "Esa palabra es muy larga", 1, 25);
    largo=strlen(palabra);


    //
    getchar();
    printf("\e[2J\e[H");
/////////////////////////////////////////////////////////////////////////
    printf("Vidas: %d\n\n", vidas);

    for (int i=0;i<largo;i++)
    {
        printf("_ ");

   }
   printf("\n\n\nElija una letra: ");
   scanf("%c", letra);





    return 0;

}
