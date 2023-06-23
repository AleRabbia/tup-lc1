/*6. Crear una función que reciba un caracter y un número, y escriba un “triángulo”
formado por ese caracter, que tenga como anchura inicial la que se ha indicado. Por
ejemplo, si la caracter es * y la anchura es 4, debería escribir
****
***
**
**/

#include <stdio.h>
#include <stdlib.h>

void imprimirTriangulo(char letra, int ancho);

void main()
{

    char letra;
    int ancho;
    printf("Ingrese un caracter con el que formaremos la estructura\n");
    scanf("%c", &letra);
     printf("Ingrese la cantidad de pisos que tendr%c la estructura\n", 160);
     scanf("%d", &ancho);

    imprimirTriangulo(letra, ancho);
}

void imprimirTriangulo(char letra, int ancho)
{
    int i, j;

    for (i = ancho; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%c", letra);
        }
        printf("\n");
    }
}