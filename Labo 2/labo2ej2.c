#include <stdio.h>
int main()
{
    char a; 
    printf("Introducir una letra para determinar si es vocal o consonante: ");
    scanf("%c", &a);
    switch(a)
    {
        case 'a':
        printf("%c es una vocal.\n",a);
        break;

        case 'e':
        printf("%c es una vocal.\n",a);
        break;

        case 'i':
        printf("%c es una vocal.\n",a);
        break;

        case 'o':
        printf("%c es una vocal.\n",a);
        break;

        case 'u':
        printf("%c es una vocal.\n",a);
        break;

        default:
        printf("%c es una consonante.\n",a);
    }
    return 0;
}