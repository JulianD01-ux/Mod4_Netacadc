#include <stdio.h>

int main(void)
{
    int mes;                
    int diasPrevios = 0;    
    int calculoCorrecto = 0; 

    // Pedir al usuario el número del mes
    printf("Ingrese el número del mes (1 = enero, 2 = febrero, ..., 12 = diciembre): ");
    scanf("%d", &mes);

    // Vector con los nombres de los meses
    const char *nombresMes[] = {
        "mes inválido", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    switch (mes)
    {
        case 12: diasPrevios += 30;
        case 11: diasPrevios += 31;
        case 10: diasPrevios += 30;
        case 9:  diasPrevios += 31;
        case 8:  diasPrevios += 31;
        case 7:  diasPrevios += 30;
        case 6:  diasPrevios += 31;
        case 5:  diasPrevios += 30;
        case 4:  diasPrevios += 31;
        case 3:  diasPrevios += 29;
        case 2:  diasPrevios += 31;
        case 1:
            calculoCorrecto = 1;
            break;
        default:
            puts("Error: el número ingresado no corresponde a ningún mes.");
    }

    if (calculoCorrecto)
        printf("Hay %d días antes del mes de %s.\n", diasPrevios, nombresMes[mes]);

    return 0;
}
