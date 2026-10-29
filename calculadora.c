/******************************************************************************

Cortés Romero Alberto Emiliano
calculadora
librerias 
encabezado de funciones y variables globales
*******************************************************************************/
#include <stdio.h>

float suma (float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2); //funciones(parametros)

void main ()

{
    int eleccion = 0;
    float n1, n2,res;
    do 
    {
        printf("Elige una operación");          
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. multiplicacion\n");
        printf("4. Division\n");
    }while (eleccion < 1 || eleccion < 4 );
    printf ("Dame la primera cifra:\n");
    scanf("%f", &n1);
    printf("Dame la segunda cifra\n");
    scanf("%f", &n2);
    
    switch (eleccion)
    {
        case 1:
        res = suma(n1,n2);
        break;
        
        case 2:
        res = Resta(n1,n2);
        break;
        
        case 3:
res =   multiplicacion(n1,n2);
        break;
        
        case 4:
res =   Division(n1,n2);
        break;
    }

    

}

float suma(float num1, float num2);
{
    float res;
    res = num1+num2;
    return res;
}

float resta(float num 1, float num2);
{
    float res;
    res = num1-num2;
    return res;
}

float multiplicacion(float num 1, float num2);
{
    float res;
    res = num1*num2;
    return res;
}

float division(float num1, float num2); //funciones(parametros)
{
    float res;
    res = num1/num2;
    return res;
}





