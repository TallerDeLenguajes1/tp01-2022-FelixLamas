#include<stdio.h>
// declaracion de funciones
int cuadrado(int num);
int main(){
    int cuad, numero;
    printf("Ingrese un numero entero:");
    scanf("%d", &numero);
    cuad = cuadrado(numero);
    printf("El cuadrado del numero %d es %d", numero, cuad);
    return 0;
}

int cuadrado(int num){
    return num * num;
}