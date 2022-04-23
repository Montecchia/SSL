#include <stdio.h>
int main(){
    char nombre[50];
    int edad;
    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    printf("La edad de %s es %d. \n Hola %s!", nombre, edad, nombre);
}