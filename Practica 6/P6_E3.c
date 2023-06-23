/*3. Crear una función que devuelva la primera letra de una cadena de texto.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Primera_letra(char *cadena)
{
    return cadena[0];
}

void main()
{
    char cadena[] = " ";
    printf("Ingrese una cadena:\n");
    scanf("%s", &cadena);
    char letra = Primera_letra(cadena);
    printf("La primera letra de la cadena es: %c\n", letra);
    system("pause");
}