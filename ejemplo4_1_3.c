#include <stdio.h>

int main(void)
{
    char abecedario[26];  // Arreglo que almacenará las letras del abecedario
    char letra;           // Variable para recorrer las letras

    // Llenar el arreglo con las letras de la 'a' a la 'z'
    for (letra = 'a'; letra <= 'z'; letra++)
    {
        abecedario[letra - 'a'] = letra;
    }

    // Mostrar las letras del abecedario en orden inverso (de 'z' a 'b')
    printf("Letras del abecedario en orden inverso:\n");
    for (letra = 'z'; letra > 'a'; letra--)
    {
        printf("%c\n", abecedario[letra - 'a']);
    }

    // Imprimir la palabra "great" utilizando el arreglo
    printf("\nPalabra formada: ");
    printf("%c", abecedario['g' - 'a']);
    printf("%c", abecedario['r' - 'a']);
    printf("%c", abecedario['e' - 'a']);
    printf("%c", abecedario['a' - 'a']);
    printf("%c\n", abecedario['t' - 'a']);

    return 0;
}
