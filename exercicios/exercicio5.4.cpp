/* 5.4 Escreva um programa que leia um número inteiro e mostre o resultado da quociente
(inteiro) da divisão desse número por 2 e por 3.*/

#include <stdio.h>
int main (){
    int numero, divisao2, divisao3;
    printf("Digite um número: ");
    scanf("%d", &numero);

    divisao2 = numero / 2;
    divisao3 = numero / 3;

    printf("O quociente dividido por 2 é: %d, e dividido por 3 é: %d \n", divisao2, divisao3);
    
    getchar();
    return 0;
}