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

    int n = 0, count = 0;
    char str[100000], ch;
    
    while (ch != EOF)
    {
        str[count]=fgetc(a);
        printf("%c", ch);
        ch = fgetc(a);
        n = atoi(str);
        count++;
    }
    puts(str);
    printf("\n%d", count);
    printf("\n%d", n);

    fclose(a);

    return 0;
}