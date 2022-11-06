// Programa 7.1: Programa contendo expressões aritméticas com números inteiros.

#include <stdio.h>
int main(void){
    int x, y, z, resultado;
    x = 25;
    y = 10;
    resultado = x + y;
    printf("A soma de %d e %d é %d\n", x, y, resultado);

    x = 38;
    y = 29;
    resultado = x - y;
    printf("A substração de %d e %d é %d\n", x, y, resultado);

    x = 51;
    y = 17;
    resultado = x * y;
    printf("A multiplicação de %d por %d é %d\n", x, y, resultado);

    x = 100;
    y = 25;
    resultado = x / y;
    printf("A divisão de %d por %d é %d\n", x, y, resultado);

    x = 17;
    y = 3;
    resultado = x % y;
    printf("O resto da divisão de %d por %d é %d\n", x, y, resultado);

    x = -7;
    resultado = -x;
    printf("%d com sinal trocado é %d\n", x, resultado);

    x = 10;
    y = 4;
    z = 15;
    resultado = x + y * z;
    printf("A expressão %d + %d * %d tem resultado %d\n", x, y, z, resultado);

    getchar();
    return 0;
}