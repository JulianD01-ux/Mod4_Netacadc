#include <stdio.h>

int main(void)
{
    int serieFibo[10];   // Arreglo para almacenar los 10 primeros números de Fibonacci
    int indice;          // Variable de control para los bucles

    // Inicializar los dos primeros valores de la serie
    serieFibo[0] = 1;
    serieFibo[1] = 1;

    // Calcular el resto de la serie
    for (indice = 2; indice < 10; indice++)
    {
        serieFibo[indice] = serieFibo[indice - 1] + serieFibo[indice - 2];
    }

    // Imprimir todos los valores de la serie
    printf("Serie completa de Fibonacci:\n");
    for (indice = 0; indice < 10; indice++)
    {
        printf("%d\n", serieFibo[indice]);
    }

    // Imprimir solo los elementos en posiciones pares (0, 2, 4, ...)
    printf("\nElementos en posiciones pares:\n");
    for (indice = 0; indice < 10; indice += 2)
    {
        printf("%d\n", serieFibo[indice]);
    }

    // Imprimir solo los elementos en posiciones impares (1, 3, 5, ...)
    printf("\nElementos en posiciones impares:\n");
    for (indice = 1; indice < 10; indice += 2)
    {
        printf("%d\n", serieFibo[indice]);
    }

    return 0;
}
