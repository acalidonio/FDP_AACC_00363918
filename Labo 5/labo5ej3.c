// André Calidonio - 00363918

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// se crea una funcion randArray que toma como entrada el valor del puntero *ptrn
int randArray(int *ptrn)
{
    //declaracion de variables, junto con un array con tamaño del puntero de n (el numero que ingresa el usuario)
    int x, random, array3[*ptrn];

    // se usa la hora actual para generar semilla
    srand(time(NULL));

    // se declara un for que llena cada uno de los valores del array con numeros aleatorios entre 1 y 100
    for(x=0; x<*ptrn; x++){  
        random = rand() % 100 + 1;
        array3[x]=random;
    }

    // se declara otro for para imprimir el array al derecho
    printf("Array al derecho: "); 
    for(x=0; x<*ptrn; x++){  
        printf("%d ", array3[x]);
    }

    // se declara otro for para imprimir el array al reves
    printf("\nArray al reves: ");
    for(x=*ptrn; x>0; x--){  
        printf("%d ", array3[x-1]);
    }
}

int main()
{
    //en el main se declara la variable que ingresara el usuario y el puntero de esa variable
    int n,*ptrn=&n;
    printf("Ingresar el tamano del array: ");
    scanf("%d",&n);

    // se llama la funcion randArray y la ejecuta
    printf("",randArray(ptrn));
    return 0;
}