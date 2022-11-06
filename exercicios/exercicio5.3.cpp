/* 5.3 Faça um programa que leia três números inteiros e mostre como resultado a soma 
desses três números e também a multiplicação desses três números. */

#include <stdio.h>
int main (){
    int n1, n2, n3, soma, multiplicacao;
    printf("Digitem três números: ");
    scanf("%d" "%d" "%d", &n1, &n2, &n3);

    soma = n1 + n2 + n3;
    printf("A soma dos números será: %d\n", soma);

    multiplicacao = n1 * n2 * n3;
    printf("A multiplicação dos números será: %d\n", multiplicacao);
    
    getchar();
    return 0;
}