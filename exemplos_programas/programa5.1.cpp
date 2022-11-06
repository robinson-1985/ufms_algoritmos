// Programa 5.1: Programa com entrada e saída de dados.

#include <stdio.h>
/* Programa que lê dois números inteiros e mostra
o resultado da soma desses dois números */
int main(){
    int num1, num2, soma;
    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe outro número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    
    printf("A soma de %d mais %d é %d\n", num1, num2, soma);

    getchar();
    return 0;
}