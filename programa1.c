/******************************************************************************

Cortés Romero ALberto Emiliano
arreglos unidimensionales

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[5] = {10,8,5,8,7}; //arreglo declarado, en este caso ya está "lleno"
    int indice = 0;
    printf("\tlista\n");
    while (indice<5) // acceso a cada elemento del arreglo
    {
        printf("\t calificacion del alumno %d es %d", indice+1, lista [indice]);
        indice += 1; //contador, indice= indice + 1
    }
    printf("\n");

    return 0;
}
