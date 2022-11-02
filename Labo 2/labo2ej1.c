#include <stdio.h>
int main()
{
    int a; 
    printf("Introducir un numero entero: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("%d es un numero negativo.\n",a);
        }
    else if (a==0) {
            printf("%d es igual a cero.\n",a);
        }
    else{
        printf("%d es un numero positivo.\n",a);
    }
    return 0;
}