/*Crear un programa que reciba dos números y retorne el primer número elevado al
segundo.*/

#include <stdio.h>

int main(){
    int base, exponente, i; 
    int resultado = 1;

    printf("Ingrese base: ");
    scanf("%d", &base);

    printf("Ingrese exponente: ");
    scanf("%d", &exponente);
    
    for (i = 1; i <= exponente; i++)
    {
        resultado = resultado * base;
    }

    printf("El resultado es: %d", resultado);
}