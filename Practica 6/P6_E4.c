
/*Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario.*/

#include <stdio.h>
#include <stdlib.h>

int esPrimo(int numero)
{
    // Los números menores o iguales a 1 no son primos
    if (numero <= 1)
    {
        return 0;
    }

    // Verificar si el número es divisible por algún otro número menor que él
    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

void main()
{
    int numero;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &numero);

    switch (esPrimo(numero))
    {
    case 1:
        printf("%d es un n%cmero primo.\n", numero, 163);
        break;
    case 0:
        printf("%d no es un n%cmero primo.\n", numero, 163);
        break;
    default:
        break;
    }
}