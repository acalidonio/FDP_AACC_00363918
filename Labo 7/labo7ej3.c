// Andre Calidonio - 00363918

#include <stdio.h>
#include <string.h>

int main()
{
    // se abre el archivo que contendra el resultado
    FILE *voc = fopen("vocales.txt", "a");

    // se confirma que se abrio el archivo correctamente
    if (voc == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    // se declaran variables, ademas de un string
    int count, length = 0;
    char str[100];

    // se le pide al usuario ingresar una palabra y se guarda en el array "str"
    printf("Ingrese una palabra para contar la cantidad de vocales que posee: ");
    fgets(str, sizeof(str), stdin);

    // se declaran variables para cada una de las letras que se necesitan contar, ademas de contadores
    int a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
    int ca = 0, ce = 0, ci = 0, co = 0, cu = 0;

    // este es un bucle que permite verificar la longitud de la palabra
    while (str[length] != '\0')
    {
        length++;
    }
    // se tiene que restar uno a length ya que el string se almacena con una posicion vacia al final
    length--;

    // bucle for usado para comparar todos los caracteres del string con las variables declaradas anteriormente
    for (count = 0; count < length; count++)
    {
        // se compara para verificar cuantas letras "a" hay en la palabra
        if (str[count] == a)
        {
            ca++;
        }

        // se compara para verificar cuantas letras "e" hay en la palabra
        else if (str[count] == e)
        {
            ce++;
        }

        // se compara para verificar cuantas letras "i" hay en la palabra
        else if (str[count] == i)
        {
            ci++;
        }

        // se compara para verificar cuantas letras "o" hay en la palabra
        else if (str[count] == o)
        {
            co++;
        }

        // se compara para verificar cuantas letras "u" hay en la palabra
        else if (str[count] == u)
        {
            cu++;
        }
    }

    // estas tres lineas mueven la palabra del array "str" al array "good", el cual tiene la longitud exacta de la palabra utilizada
    // esto se realiza para que no hayan grandes espacios despues de la palabra que el usuario escribio en el documento de texto
    char good[length];
    strncpy(good, str, length);
    good[length] = '\0';

    // se imprimen en el documento la palabra, ademas de la cantidad de cada una de las vocales que contiene
    fprintf(voc, "\n\nLa palabra %s contiene: ", good);
    fprintf(voc, "\n%d letra(s) %c", ca, a);
    fprintf(voc, "\n%d letra(s) %c", ce, e);
    fprintf(voc, "\n%d letra(s) %c", ci, i);
    fprintf(voc, "\n%d letra(s) %c", co, o);
    fprintf(voc, "\n%d letra(s) %c", cu, u);

    // se cierra el documento
    fclose(voc);
    return 0;
}