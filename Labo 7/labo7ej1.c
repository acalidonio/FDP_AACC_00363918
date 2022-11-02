// Andre Calidonio - 00363918

#include <stdio.h>

int main()
{
    // se abren dos archivos de texto distintos, uno para numeros positivos y otro para negativos
    FILE *a = fopen("positivo.txt", "a");
    FILE *b = fopen("negativo.txt", "a");

    // se confirma que se abrio el archivo de los positivos correctamente
    if (a == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    // se confirma que se abrio el archivo de los negativos correctamente
    if (b == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    // se declara el int n
    int n = 1;


    printf("Ingrese numeros enteros, use 0 para salir: ");
    while (n != 0)
    {   
        // mientras n sea distinto de 0, se pide al usuario ingresar un numero para guardarlo en uno de los documentos
        scanf("%d", &n);

        // si n > 0 entonces se guarda en el archivo de los numeros positivos
        if (n > 0)
        {
            fprintf(a, "%d", n);
            fprintf(a, "\n");
        }

        // si n < 0 entonces se guarda en el archivo de los numeros negativos
        else if (n < 0)
        {
            fprintf(b, "%d", n);
            fprintf(b, "\n");
        }
    }

    // se cierran los archivos y se sale del programa
    fclose(a);
    fclose(b);
    return 0;
}