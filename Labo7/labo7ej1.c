#include <stdio.h>

int main()
{
    FILE *a = fopen("positivo.txt", "a");
    FILE *b = fopen("negativo.txt", "a");

    // Es buena practica confirmar que el archivo se ha abierto correctamente
    if (a == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    if (b == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    int n = 1;

    printf("Ingrese numeros enteros, use 0 para salir: ");
    while (n != 0)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            fprintf(a, "%d", n);
            fprintf(a, "\n");
        }
        else if (n < 0)
        {
            fprintf(b, "%d", n);
            fprintf(b, "\n");
        }
    }

    fclose(a);
    fclose(b);
    return 0;
}