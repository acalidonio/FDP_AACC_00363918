#include <stdio.h>
int main()
{
    float a,b;
    printf("Ingrese 2 números para incluirlos en las operaciones: ");
    scanf("%f", &a);
    printf("Segundo número: ");
    scanf("%f", &b);
    printf("Suma: %f\nResta: %f\nMultiplicación: %f\nDivisión: %f",a+b,a-b,a*b,a/b);
    return 0;
}