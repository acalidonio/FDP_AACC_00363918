//Andre Calidonio - 00363918

#include <stdio.h>
int main()
{
    //declarar variables y pedirle al usuario que elija la base y el exponente
    //float para los casos con exponentes negativos
    int a,b,e; 
    float d;
    printf("Introducir la base: ");
    scanf("%d", &b);
    printf("Introducir el exponente: ");
    scanf("%d", &e);

    //se establece que a y d sean iguales a b para que se pueda multiplicar por un numero estatico siempre
    a=b;
    d=b;

    //exponente positivo
    if(e>0)
    {
        for (e;e>=2;e--)
        a=a*b;
        printf("%d ",a);
    }

    //exponente negativo
    else if(e<0)
    {
        for (e;e<=0;e++)
        d=d/b;
        printf("%f ",d);
    }

    //exponente nulo
    else
    {
        printf("1");
    }
return 0;
}