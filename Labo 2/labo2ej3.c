#include <stdio.h>
int main()
{
    int a; 
    printf("Introducir el numero de zapatos a comprar para determinar su descuento: ");
    scanf("%d", &a);
    if (a>=30)
    {
        printf("El precio final es de $%.2f", a*80*0.6);
    }
    else if (a>20)
    {
        printf("El precio final es de $%.2f", a*80*0.8);
    }
    else if (a>10)
    {
        printf("El precio final es de $%.2f", a*80*0.9);
    }
    else
    {
        printf("El precio final es de $%d", a*80);
    }
    return 0;
}