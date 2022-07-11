#include<stdio.h>
// declaracion de funciones
int cuadrado(int num);
void cuadradoV(int num2, int *p);

int main(){
    int cuad, cuad2, *puntero, numero1, numero2;
    printf("Ingrese un numero entero:");
    scanf("%d", &numero1);
    cuad = cuadrado(numero1);
    printf("El cuadrado del numero %d es %d", numero1, cuad);
    printf("Ingrese un numero entero:");
    scanf("%d", &numero2);
    puntero = &cuad2;
    cuadradoV(numero2, puntero);
    printf("El cuadrado del numero %d es %d", numero2, cuad2);
    return 0;
}

int cuadrado(int num){
    return num * num;
}

void cuadradoV(int num2, int *p){
    *p = num2 * num2;
}