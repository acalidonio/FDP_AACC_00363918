//Andre Calidonio - 00363918

#include <stdio.h>

//se crea una funcion void "vocal" que tiene por input una letra

void vocal(char letra)
{
    //se determina si la letra es a para entrar al if e imprimir la palabra
    if(letra == 'a')
    {
        printf("Amigo");
    }

    //se determina si la letra es e para entrar al if e imprimir la palabra
    else if(letra == 'e')
    {
        printf("Elefante");
    }

    //se determina si la letra es i para entrar al if e imprimir la palabra
    else if(letra == 'i')
    {
        printf("Inteligente");
    }

    //se determina si la letra es o para entrar al if e imprimir la palabra
    else if(letra == 'o')
    {
        printf("Ominoso");
    }

    //se determina si la letra es u para entrar al if e imprimir la palabra
    else if(letra == 'u')
    {
        printf("Uva");
    }

    //en el caso de consonante, se dice que no es vocal
    else
    {
        printf("La letra ingresada no es una vocal");
    }
}

int main()
{
    // en el main, se declara la variable char "letra"
    char letra;

    //se imprime el introducir letra y se hace el scanf
    printf("Introducir una letra para determinar si es una vocal: ");
    scanf("%c", &letra);

    //se llama la funcion vocal
    vocal(letra);

    return 0;
}