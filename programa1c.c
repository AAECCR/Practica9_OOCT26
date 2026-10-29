/******************************************************************************

Cortés Romero ALberto Emiliano
arreglos unidimensionales con for

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[5] = {10,8,5,8,7};
    int indice = 0;
    printf("\tlista\n");
    for (indice = 0; indice < 5; indice++)// acceso a cada elemento del arreglo
    {
        printf("\t calificacion del alumno %d es %d", indice+1, lista [indice]);
        indice += 1; //contador, indice= indice + 1
    }
    printf("\n");

    return 0;
}
