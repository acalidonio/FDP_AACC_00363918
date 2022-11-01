// Andre Calidonio - 00363918

#include <stdio.h>
#include <string.h>

int main()
{
    // se declara el array de caracteres ademas de variables
    char texto[1000];
    int count, length=0, bandera=0;

    // El usuario ingresa una palabra y se guarda en texto[]
    printf("Ingrese una palabra para verificar si es un palindromo: ");
    fgets(texto, sizeof(texto), stdin);

    // este es un bucle que permite verificar la longitud de la palabra
    while ( texto[length] != '\0' )
    {
        length++;
    }
    // se tiene que restar uno a length ya que el string se almacena con una posicion vacia al final
    length--;

    // usado para depuracion
    // printf("%d", length);

    //se crea un bucle for que aumenta el contador count hasta llegar a length
    for(count=0; count < length; count++)
    {   
        // imprimen todos los valores de las letras para verificar si es un palindromo, usado para depuracion
        // printf("\n%c count", texto[count]);
        // printf("\n%c count-1", texto[length-count-1]);

        // se crea un if que compara la primera letra de la palabra con la ultima letra de la palabra, si son iguales, se le suma 1 a bandera
        if(texto[count] == texto[length-count-1])
        {
            bandera = bandera+1;
        }
    }

    // usado para depuracion
    // printf("\n%d", bandera);

    // se crea un if que especifica que si length es igual al valor de bandera, la palabra sera un palindromo
    if(length == bandera)
    {
        printf("\nLa palabra es un palindromo");
    }
    // si length no es igual a bandera, la palabra no es un palindromo
	else
    {
        printf("\nLa palabra no es un palindromo");
    }

    return 0;
}