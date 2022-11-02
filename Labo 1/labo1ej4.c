#include <stdio.h>
int main()
{
    float a;
    printf("Ingrese la temperatura en °C: ");
    scanf("%f", &a);
    a=a*9/5+32;
    printf("Temperatura en °F: %f",a);
    return 0;
}