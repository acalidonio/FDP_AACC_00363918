// André Calidonio - 00363918

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// se crea una funcion randArray que toma como entradas los valores de los punteros *ptrn y *ptra
int randArray(int *ptrn, int *ptra)
{
    //declaracion de variables, junto con un array con tamaño del puntero de n (el numero que ingresa el usuario)
    int x, random, count, array2[*ptrn];

    // se usa la hora actual para generar semilla
    srand(time(NULL));

    // se declara un for que llena cada uno de los valores del array con numeros aleatorios entre 1 y 10, además de que cuenta la cantidad del numero especificado
    // por el usuario que se generan para contarlos y luego imprime el array
    for(x=0; x<*ptrn; x++)
    {  
        random = rand() % 10 + 1;
        array2[x]=random;
        if(random==*ptra)
        {
            count++;
        }
        printf("%d ", array2[x]);
    }

    // se imprime la cantidad de veces que se conto el numero especificado por el usuario
    printf("\nEl numero %d se repite %d veces dentro del array", *ptra, count);
}

int main()
{
    //en el main se declara la variable que ingresara el usuario y el puntero de esa variable
    int a, n, *ptrn=&n, *ptra=&a;
    printf("Ingresar el tamano del array aleatorio a generar: ");
    scanf("%d",&n);
    printf("Ingresar un numero entero para verificar cuantas veces se repite: ");
    scanf("%d",&a);

    // se llama la funcion randArray y la ejecuta
    printf("",randArray(ptrn,ptra));
    return 0;
}