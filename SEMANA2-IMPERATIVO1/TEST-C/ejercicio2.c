//Implemente un programa que, dado un entero n, obtenga el resultado
//de S = 1 + 2 + 3 + 4 + ... + 2n

#include <stdio.h>

int main(){
    int result = 0;
    int n = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    int i;
    for (i = 1; i <= 2*n; i++)
    {
        result = result + i;
    }
    printf("El resultado es: %d", result);
}
