// Andre Calidonio - 00363918

#include <stdio.h>
#include <string.h>

int main()
{
    // se declaran los arrays de caracteres
    char texto[1000], comb[1000];

    // El usuario ingresa un string de caracteres y se guarda en texto[]
    printf("Ingrese un texto: ");
    fgets(texto, sizeof(texto), stdin);

    // El usuario ingresa otro string de caracteres y se guarda en comb[]
    printf("Ingrese la combinacion de letras a buscar: ");
    scanf("%s", comb);

    // se comparan las strings, en este caso, si la string comb[] no está dentro de texto[], entonces se dice que no se encontró la string.
    if (strstr(texto,comb) == NULL) 
    {
        printf("No se encontro");
    }
    // en caso contrario, si la string si está contenida en texto[], se muestra un texto que dice que se logro encontrar.
    else
    {
        printf("Si se encontro");
    }
    return 0;
}