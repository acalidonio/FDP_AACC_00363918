//Andre Calidonio - 00363918

#include <stdio.h>
int main()
{
    //declarar variables y pedirle al usuario que elija el número a multiplicar
    //y el multiplo en el que se quiere detener
    int a,b,c,d;

    printf("Introducir el numero que se va a multiplicar: ");
    scanf("%d", &a);
    
    printf("Introducir el multiplo de la tabla a generar: ");
    scanf("%d", &b);

    //realizamos el bucle for, nos permite contar desde b hasta 1 para crear una tabla descendente
    //se hace un printf formateado de la manera a x b = c
    for (b; 1<=b; b--)
    printf("%d x %d = %d\n",a,b,a*b);
    return 0;
}