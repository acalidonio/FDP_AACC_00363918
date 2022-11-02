#include <stdio.h>
#include <string.h>

int main()
{
    FILE *voc = fopen("vocales.txt", "a");

    // Es buena practica confirmar que el archivo se ha abierto correctamente
    if (voc == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    int count, length = 0;
    char str[100];

    printf("Ingrese una palabra para contar la cantidad de vocales que posee: ");
    fgets(str, sizeof(str), stdin);

    int a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
    int ca = 0, ce = 0, ci = 0, co = 0, cu = 0;

    // este es un bucle que permite verificar la longitud de la palabra
    while (str[length] != '\0')
    {
        length++;
    }
    // se tiene que restar uno a length ya que el string se almacena con una posicion vacia al final
    length--;

    for (count = 0; count < length; count++)
    {
        if (str[count] == a)
        {
            ca++;
        }
        else if (str[count] == e)
        {
            ce++;
        }
        else if (str[count] == i)
        {
            ci++;
        }
        else if (str[count] == o)
        {
            co++;
        }
        else if (str[count] == u)
        {
            cu++;
        }
    }

    char good[length];
    strncpy(good, str, length);
    good[length] = '\0';

    fprintf(voc, "\n\nLa palabra %s contiene: ", good);
    fprintf(voc, "\n%d letra(s) %c", ca, a);
    fprintf(voc, "\n%d letra(s) %c", ce, e);
    fprintf(voc, "\n%d letra(s) %c", ci, i);
    fprintf(voc, "\n%d letra(s) %c", co, o);
    fprintf(voc, "\n%d letra(s) %c", cu, u);

    fclose(voc);
    return 0;
}