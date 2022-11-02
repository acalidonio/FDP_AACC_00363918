#include <stdio.h>
int main()
{
    int a,b; 
    printf("Introducir su edad: ");
    scanf("%d", &a);
    if (a>=18)
    {
        printf("Lista de materias:\n1. Fundamentos de progra\n2. Mate discreta\n3. Calculo\n4. Fisica\n");
        printf("Elija su favorita: ");
        scanf("%d", &b);
        printf("Su edad es %d y ha escogido la opcion %d.",a,b);
    }
    else
    {
        printf("Lista de materias:\n1. Matematicas\n2. Lenguaje\n3. Ciencias\n4. Sociales\n");
        printf("Elija su favorita: ");
        scanf("%d", &b);
        printf("Su edad es %d y ha escogido la opcion %d.",a,b);
    }
    return 0;
}