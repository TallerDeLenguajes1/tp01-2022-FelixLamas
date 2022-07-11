#include<stdio.h>
// declaracion de funciones
int cuadrado(int num);
void cuadradoV(int num2, int *p);
void mostrarVariable(int *p_var);

int main(){
    int cuad, cuad2, *puntero, numero1, numero2;
    int variable, *p_var;
    printf("Ingrese un numero entero:");
    scanf("%d", &numero1);
    cuad = cuadrado(numero1);
    printf("El cuadrado del numero %d es %d", numero1, cuad);
    printf("Ingrese un numero entero:");
    scanf("%d", &numero2);
    puntero = &cuad2;
    cuadradoV(numero2, puntero);
    printf("El cuadrado del numero %d es %d", numero2, cuad2);
    printf("Ingrese un numero entero:");
    scanf("%d", &variable);
    p_var = &variable;
    mostrarVariable(p_var);
    return 0;
}

int cuadrado(int num){
    return num * num;
}

void cuadradoV(int num2, int *p){
    *p = num2 * num2;
}

void mostrarVariable(int *p_var){
    printf("La variable ingresada es %d y la direccion de memoria de la variable es: %p", *p_var, p_var);
}