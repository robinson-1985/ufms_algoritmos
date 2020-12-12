/* 5.1 Faça um programa que leia três números inteiros a, b e c, calcule a ∗ b + c 
e mostre o resultado na saída padrão para o usuário. */

// Programa 5.3: Uma solução possível para o exercício 5.1.

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Informe 3 números inteiros: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("A expressão %d*%d+%d tem resultado %d.\n", a, b, c, a*b+c);

    getchar();
    return 0;
}