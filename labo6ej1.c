#include <stdio.h>
#include <string.h>

int main()
{
    char texto[1000], comb[1000];
    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Ingrese la combinacion de letras a buscar: ");
    scanf("%s", comb);

    if (strstr(texto,comb) == NULL) 
    {
        printf("No se encontro");
    }
    else
    {
        printf("Si se encontro");
    }
    return 0;
}