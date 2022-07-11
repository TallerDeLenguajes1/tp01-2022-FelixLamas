#include<stdio.h>

int main(){
    int a=10, *puntero;
    puntero = &a;
    printf("EL contenido del punteto es %p \n", puntero);
    printf("La direccion de memoria de la variable es: %p \n", &a);
    printf("La direccion de memoria del puntero es: %p \n", &puntero);
    printf("El tamaño de memoria utilizado por la variable es: %d \n", sizeof(a));
    return 0;
}