/*Crear un programa que reciba 10 números enteros, los almacene en un arreglo y
luego lo recorra para poder hallar el menor y mayor valor. Imprimir el menor y mayor
valor.*/

#include <stdio.h>

int main(){
    int arr[10], i; 

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &arr[i]);
    }

    int menor = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
        }
    }
    printf("\nEl numero menor es: %d", menor);

    int mayor = arr[0];    
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > mayor)
        {
            mayor = arr[i];
        }
    }
    printf("\nEl numero mayor es: %d", mayor); 

}
