//Andre Calidonio - 00363918

#include <stdio.h>

//se crea la funcion suma con los tres punteros
float suma(float *ptrA, float *ptrB, float *ptrC)
{
    //se hace return la suma de los punteros
    return *ptrA + *ptrB + *ptrC;
}

//se crea la funcion resta con los tres punteros
float resta(float *ptrA, float *ptrB, float *ptrC)
{
    //se hace return la resta de los punteros
    return *ptrA - *ptrB - *ptrC;
}

//se crea la funcion multiplicacion con los tres punteros
float multi(float *ptrA, float *ptrB, float *ptrC)
{
    //se hace return la multiplicacion de los punteros
    return *ptrA * *ptrB * *ptrC;
}

int main()
{
    //declaracion de variables
    float a,b,c;

    //x es para el valor del switch
    int x;

    //declaracion de los punteros y sus valores
    float *ptrA = &a, *ptrB = &b, *ptrC = &c;

    //se le pide al usuario introducir las variables
    printf("Introducir tres numeros, a, b y c");

    printf("\na: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    //se pide ingresar 1, 2 o 3 para las respectivas operaciones
    printf("Introducir 1 para sumar, 2 para restar y 3 para multiplicar: ");
    scanf("%d", &x);

    //Se crea un switch para elegir entre las tres opciones
    switch(x)
    {
        // en el caso 1, se ejecuta la funcion suma y se imprime el resultado
        case 1:
        printf("La suma de los tres numeros es %f", suma(ptrA, ptrB, ptrC));
        break;

        // en el caso 2, se ejecuta la funcion resta y se imprime el resultado
        case 2:
        printf("La resta de los tres numeros es %f", resta(ptrA, ptrB, ptrC));
        break;

        // en el caso 3, se ejecuta la funcion multiplicacion y se imprime el resultado
        case 3:
        printf("La multiplicacion de los tres numeros es %f", multi(ptrA, ptrB, ptrC));
        break;
        
        // por defecto, se indica que se tiene que ingresar 1, 2 o 3
        default:
        printf("Por favor ingrese 1, 2 o 3");
        break;
    }

    return 0;
}
