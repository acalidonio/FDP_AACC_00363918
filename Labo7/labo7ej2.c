#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *a = fopen("promedio.txt", "r");

    // Es buena practica confirmar que el archivo se ha abierto correctamente
    if (a == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    char ch;
    int n = 0, count = 0;
    ch = fgetc(a);
    while (ch != EOF)
    {
        printf("%c", ch);

        ch = fgetc(a);
        
    }

    printf("%d", count);
    printf("%d", n);

    fclose(a);

    return 0;
}