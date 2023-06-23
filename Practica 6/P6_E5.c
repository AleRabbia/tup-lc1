/*5. Crear una función que reciba un número cualquiera y que devuelva como resultado
la suma de sus dígitos.
*/

#include <stdio.h>
#include <stdlib.h>

int sumarDigitos(int numero);

void main()
{
    int numero;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &numero);

    int suma = sumarDigitos(numero);
    printf("La suma de los d%cgitos de %d es: %d\n", 161, numero, suma);
}

int sumarDigitos(int numero)
{
    int suma = 0;

    // Obtener el valor absoluto del número (para tratar números negativos)
    numero = abs(numero);

    // Sumar los dígitos del número
    while (numero > 0)
    {
        suma += numero % 10; // Obtener el último dígito y sumarlo a la suma total
        numero /= 10;        // Eliminar el último dígito del número
    }

    return suma;
}