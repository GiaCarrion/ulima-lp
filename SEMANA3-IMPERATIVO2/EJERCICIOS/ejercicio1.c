/*Implemente un programa que calcule el producto escalar de 2 vectores
representados como arrays (longitud maxima = 10)*/

#include <stdio.h>

int main(){
    const int ARR_SIZE = 10;
    int A[ARR_SIZE];
    int B[ARR_SIZE];
    int n, i, r = 0;

    printf("Ingrese cantidad de elementos totales: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento %d del conjunto A: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Ingrese elemento %d del conjunto B: ", i);       
        scanf("%d", &B[i]);
    }

    for (i = 0; i < n; i++)
    {
        r += A[i]*B[i];
    }
    
    printf("El resultado es: %d", r);
    
}