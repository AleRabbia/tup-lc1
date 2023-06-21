#include <stdio.h>
#include <stdlib.h>

float suma(float num1, float num2);

float resta(float num1, float num2);

float multiplicacion(float num1, float num2);

float division(float num1, float num2);

int main()
{
    float numero1, numero2, resultado;
    int opcion;
    printf("Ingresa primer numero:\n");
    scanf("%f", &numero1);
    printf("Ingresa segundo numero:\n");
    scanf("%f", &numero2);
    do
    {
        system("cls");
        printf("1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicaci%cn\n4. Informar su divisi%cn\n5. Salir", 162, 162);
        printf("Seleccione una operaci%cn:\n", 162);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            resultado = suma(numero1, numero2);
            printf("El resultado es %.2f\n", resultado);
            system("pause");
            break;
        case 2:
            resultado = resta(numero1, numero2);
            printf("El resultado es %.2f\n", resultado);
            system("pause");
            break;
        case 3:
            resultado = multiplicacion(numero1, numero2);
            printf("El resultado es %.2f\n", resultado);
            system("pause");
            break;
        case 4:
            if (numero2 != 0)
            {
                resultado = division(numero1, numero2);
                printf("El resultado es %.2f\n", resultado);
            }
            else
            {
                printf("Imposible dividir por cero\n");
            }
            system("pause");
            break;
        case 5:
            printf("Gracias por usar este programa\n");
            system("pause");
            break;
        default:
            printf("Ingres%c una opci%cn incorrecta.\nIntente nuevamente\n", 162, 162);
            system("pause");
            break;
        }
    } while (opcion != 5);

    return 0;
}

float suma(float num1, float num2)
{
    float resultado;
    resultado = num1 + num2;
    return resultado;
}

float resta(float num1, float num2)
{
    float resultado;
    resultado = num1 - num2;
    return resultado;
}

float division(float num1, float num2)
{
    float resultado;

    resultado = num1 / num2;
    return resultado;
}

float multiplicacion(float num1, float num2)
{
    float resultado;
    resultado = num1 * num2;
    return resultado;
}