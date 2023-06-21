/*2. Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
*/
#include <stdio.h>
#include <stdlib.h>

int signo(float num1);

void main()  
{
    float num;

    printf("Ingrese un n%cmero: \n", 163);
    scanf("%f", &num);
    system("pause");
    printf("El resultado es: %d\n", signo(num));
    system("pause");

}

int signo(float num1)
{
    int resultado = 0;
    if (num1 > 0)
    {
        resultado = 1;
    }
    else if (num1 < 0)
    {
        resultado = -1;
    }
    else
    {
        resultado = 0;
    }
  
    return resultado;
}