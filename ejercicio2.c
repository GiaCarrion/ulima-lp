/*Crear un programa que reciba como entrada un número e indique si es positivo,
negativo o cero.*/

#include <stdio.h>

int main(){
    int n;
    
    printf("Ingrese un numero: ");
    scanf ("%d", &n);

    if (n == 0)
    {
        printf("El numero es 0.");
    } else if (n < 0)
    {
        printf("El numero es negativo");
    } else if (n > 0)
    {
        printf("El numero es positivo.");
    }
}