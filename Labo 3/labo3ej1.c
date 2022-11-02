//Andre Calidonio - 00363918

#include <stdio.h>
int main()
{
    //declarar variables y pedirle al usuario que elija entre par e impar
    int a,b,c,d; 
    printf("Introducir 1 para mostrar pares y 2 para impares: ");
    scanf("%d", &c);

    //establecer valores de inicio y final
    a=1;
    b=10;

    //primero establecemos que pasa si el usuario ingresa otro numero que no sea 1 o 2
    if(c!=1&&c!=2)
    {
        printf("Por favor ingrese 1 o 2");
        return 0;
    }
    else
    {
    //realizamos el bucle for, nos permite contar desde a hasta b
    for (a; a<=b; a++)
    
        switch (c)
        {
        //caso 1 para pares, el modulo tiene que ser igual a 0
        case 1:
            d=a%2;
            if(d==0)
            {
                printf("%d\n",a);
            }
            break;

        //caso 2 para impares, el modulo tiene que ser igual a 1
        case 2:
            d=a%2;
            if(d==1)
            {
                printf("%d\n",a);
            }
            break;
        }
    }
    return 0;
}