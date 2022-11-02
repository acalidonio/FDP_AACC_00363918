//Andre Calidonio - 00363918

#include <stdio.h>

//se crea la funcion temperatura con variables temp y grados
int temperatura(float temp,int grados)
{
    //se crea un switch ya que necesitamos determinar si el usuario eligio grados F o K
    switch(grados)
    {
        //caso 1 es para grados F, se imprime el resultado de la conversion
        case 1:
        printf("La temperatura en grados F es: %f",temp*9/5+32);
        break;

        //caso 2 es para grados K, se imprime el resultado de la conversion
        case 2:
        printf("La temperatura en grados K es: %f",temp+273.15);
        break;

        //default por si no se ingreso 1 o 2 que corresponden a F o K
        default:
        printf("Por favor ingrese 1 para Fahrenheit o 2 para Kelvin");
        return 0;
    }
}

int main()
{
    //declaracion de variables
    int grados;
    float temp;

    //se pide al usuario la temperatura en C
    printf("Introducir la temperatura en grados Celsius a convertir: ");
    scanf("%f", &temp);

    //se pide al usuario 1 para elegir F o 2 para elegir K
    printf("Introducir 1 para convertir a Fahrenheit o 2 para Kelvin: ");
    scanf("%d", &grados);

    //se llama la funcion temperatura
    temperatura(temp,grados);

    return 0;
}