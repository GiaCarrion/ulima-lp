/*Crear un programa que reciba como entrada la edad y el nombre de una persona y
luego los imprima.*/

#include <stdio.h>

int main(){
    char nombre[20];
    int edad;
// %4s = solo imprime 4 caracteres.
    printf("Ingrese el nombre: ");
    scanf("%s", &nombre);
    
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    printf("El nombre de la persona es %s y la edad es %d", nombre, edad);
}