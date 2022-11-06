// Programa 5.2: Segundo exemplo.

#include <stdio.h>
/* A função main lê dois números inteiros e mostra na saída
o resultado da multiplicação desses dois números */
int main(){
    int num1, num2, produto;
    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe outro número: ");
    scanf("%d", &num2);

    produto = num1 * num2;

    printf("O produto de %d por %d é %d\n", num1, num2, produto);

    getchar();
    return 0;
}