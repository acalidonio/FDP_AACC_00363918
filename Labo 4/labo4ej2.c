//Andre Calidonio - 00363918

#include <stdio.h>
#include <math.h>

int main()
{
    //declaracion de variable
    float a;

    //se pregunta al usuario por un numero cualquiera
    printf("Introducir el numero al cual se le aplicara la raiz cuadrada: ");
    scanf("%f", &a);

    //se usa la libreria math.h para usar la funcion sqrt() y se imprime el valor final
    printf("La raiz de %f es: %f",a,sqrt(a));
    
    return 0;
}