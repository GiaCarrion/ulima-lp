//Implemente un programa que lea un valor de nota desde el teclado.
//El programa debera mostrar un mensaje indicando si el alumno
//se encuentra aprobado o desaprobado.

#include <stdio.h>

int main(){
    int nota;
    printf("Ingrese nota del alumno: ");
    scanf("%d", &nota);
    
    if (nota < 0 || nota > 20)
    {
        printf("Nota incorrecta [0-20].");
    } else {
            if (nota <= 10)
            {
                printf("Alumno desaprobado.");
            } else if (nota >= 11) {
                printf("Alumno aprobado.");
            }
    }
}
