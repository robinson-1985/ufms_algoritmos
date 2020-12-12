/* 5.1 Faça um programa que leia três números inteiros a, b e c, calcule a ∗ b + c 
e mostre o resultado na saída padrão para o usuário. */

#include <stdio.h>
int main(){
    int a, b, c, calculo;
    printf("Digite um número para a: ");
    scanf("%d", &a);
    printf("Digite um número para b: ");
    scanf("%d", &b);
    printf("Digite um número para c: ");
    scanf("%d", &c);

    calculo = a * b + c;

    printf("O valor resultante do cálculo é: %d \n", calculo);

    getchar();
    return 0;
}