/* 7.1 Escreva um programa que receba um número inteiro x e avalie o polinômio
p(x) = 3x³ − 5x² + 2x − 1 .

Programa 7.2: Possível solução para o exercício 7.1. */

#include <stdio.h>
int main(){
    int x, p;
    printf("Informe x: ");
    scanf("%d", &x);
    p = 3 * x * x * x - 5 * x * x + 2 * x - 1;
    printf("p(%d) = %d.\n", x, p);

    getchar();
    return 0;
}