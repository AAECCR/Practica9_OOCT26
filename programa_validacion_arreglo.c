/******************************************************************************

Cortés Romero ALberto Emiliano
arreglo con for y validación
*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista [10], elem = 0;
    //validación
    do 
    {
         printf ("dame un numero entero entre 1 y 10\n");
         scanf("%i", &elem);
    }while (elem <1 || elem >10);  // || ó, && y.
    
    for (int i = 0 ; i<elem; i++)
    {
        printf("INgresa un numero para el elemento %i del arreglo : \n", i+1);
        scanf("%i", &lista[i]); //llenado del arreglo
    }
    printf("Los valores de la lista son: \n");
    
    for (int j = 0; j < elem; j++)
    {
        printf("%i", lista[j]);
    }
    printf("\n\n");
    return 0;
}
