#include <stdio.h>

int main(){

    //Run = Contrl+Alt+N
    //printf: Imprimir datos en pantalla.
    //scanf: Obtener datos a través del teclado.
    //fgets

    int grade1, grade2, grade3;
    printf("Ingrese notas: "); 
    scanf("%d %d %d", &grade1, &grade2, &grade3);
    printf("La nota es %d, %d y %d", grade1, grade2, grade3);
}