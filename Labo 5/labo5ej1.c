// André Calidonio - 00363918

#include <stdio.h>
int main()
{
    // se declaran las variables para el numero del usuario, un contador y un array
    int n, count, array1[20];

    printf("Ingresar un numero para realizar la multiplicacion: ");
    scanf("%d",&n);

    //se crea un for que asigna valores al array, en especifico multiplica n por cada numero desde 1 a 20 y lo asigna a una direccion en el array
    for(count=0; count < 20; count++){
        array1[count] = (count+1)*n;
    }

    //se crea otro for que imprima en pantalla cada uno de los resultados
    for(count=0; count<20; count++){
        printf("%d ",array1[count]);
    }
    return 0;
}