//Andre Calidonio - 00363918

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //declaracion de variables y se le pide al usuario ingresar el numero
    int input,random;
    printf("Introducir un numero del 1 al 10 para que la maquina lo adivine: ");
    scanf("%d", &input);

    //se da una semilla para el generador
    srand(time(NULL));
    
    //si el usuario ingresa un numero que no esta entre el 1 y el 10, se sale del programa
    if(input>10 || input<1)
    {
        printf("Por favor ingrese un numero del 1 al 10");
        return 0;
    }
    else
    {
        //la computadora sigue generando un número entero aleatorio entre 1 y 10 hasta que sea igual al ingresado por el usuario
        while(random!=input)
        {
            random = rand() % 10 + 1;
            printf("Intentando... (%d)\n",random);
        }
        printf("El número que habías elegido es: %d",random);
    }
    return 0;
}