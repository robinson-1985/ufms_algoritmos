/* 5.2 Faça um programa que leia um número inteiro e mostre o seu quadrado e seu cubo. 
Por exemplo, se o número de entrada é 3, a saída deve ser 9 e 27. */

#include <stdio.h>
int main(){
    int numero, quadrado, cubo;
    printf("Digite um número: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    printf("O valor ao quadrado do número é: %d\n", quadrado);

    cubo = numero * numero * numero;
    printf("O valor ao cubo do número é: %d\n", cubo);

    getchar();
    return 0;
}
