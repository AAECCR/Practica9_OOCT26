/******************************************************************************

Cortés Romero ALberto Emiliano
arreglos unidimensionales con do-while

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[5] = {10,8,5,8,7};
    int indice = 0;
    printf("\tlista\n");
    do  // acceso a cada elemento del arreglo
    {
        printf("\t calificacion del alumno %d es %d", indice+1, lista [indice]);
        indice += 1; //contador, indice= indice + 1
    }
    while (indice<5);
    printf("\n");

    return 0;
}
