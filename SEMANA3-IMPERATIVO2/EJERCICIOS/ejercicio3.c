#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int level;
    float gpa;
};


int main(){
    struct Student s1;
    strcpy(s1.name, "Juan Perez");
    s1.level = 5;
    s1.gpa = 12.3;

    printf("Nombre: %s\n", s1.name); 
    printf("Nivel: %d\n", s1.level); 
    printf("Promedio: %f\n", s1.gpa); 
    
}