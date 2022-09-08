/*Crear un programa que reciba números enteros y retorne el cuadrado de cada uno
de estos. Ingresar un 0 indicará que ya no se ingresarán más números. La cantidad
ingresada de números será menor a 10.*/

#include <stdio.h>

int main()
{
    int numero, resultado; 
    int i = 0;

    while (i < 10)
    {
        printf("\nIngrese numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            printf("Se finalizo el programa.");
            exit(-1);
        }
        else
        {
            resultado = numero * numero;

            printf("El cuadrado de ese numero es: %d", resultado);
            i++;
        }
        
    }
    
}
