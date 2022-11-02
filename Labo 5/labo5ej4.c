// André Calidonio - 00363918

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// se crea una funcion randArray que toma como entrada el valor del puntero *ptrn
int randArray(int *ptrn)
{
    //declaracion de variables, junto con un array con tamaño del puntero de n (el numero que ingresa el usuario)
    int x, random, array4[*ptrn], pos, temp;

    // se usa la hora actual para generar semilla
    srand(time(NULL));

    // se declara un for que llena cada uno de los valores del array con numeros aleatorios entre 1 y 100, luego imprime el array
    for(x=0; x<*ptrn; x++)
    {  
        random = rand() % 100 + 1;
        array4[x]=random;
        printf("%d ", array4[x]);
    }

    // mientras el valor x no sea igual a 1, se entra en un bucle que pregunta si queremos cambiar el numero, presionar 1 para salir del comando
    // y 2 para entrar en el cambio de numero
    while(x!=1)
    {
        printf("\nDesea cambiar algun numero o terminar el programa? Ingrese 1 para terminar o el 2 para cambiar: ");
        scanf("%d",&x);

        // si se presiona 2, se entra al if que pregunta la posicion del array a cambiar y el nuevo entero que ocupara la posicion
        if(x==2)
        {
            printf("Ingrese la posicion del array a cambiar: ");
            scanf("%d",&pos);
            printf("Ingrese el nuevo entero que tendra la posicion seleccionada: ");
            scanf("%d",&temp);

            // se asigna el valor de temp a la posicion del array seleccionada por el usuario
            array4[pos]=temp;

            // se vuelve a imprimir el array
            for(x=0; x<*ptrn; x++)
            {  
                printf("%d ", array4[x]);
            }
        }

        // se maneja el caso en el que el usuario no ingresa ni 1 ni 2
        else if(x!=1 && x!=2)
        {
            printf("Ingrese o 1 o 2");
        }
    }
}

int main()
{
    //en el main se declara la variable que ingresara el usuario y el puntero de esa variable
    int n=0,*ptrn=&n, x=0;

    // se evalua el tamano del array y no deja salir del bucle si es inferior a 11
    while(n<11)
    {
        printf("Ingresar el tamano del array (debe ser superior a 10): ");
        scanf("%d",&n);
    }

    // se llama la funcion randArray y la ejecuta
    printf("",randArray(ptrn));

    return 0;
}