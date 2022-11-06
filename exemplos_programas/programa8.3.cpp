// Programa 8.3: Programa que soma os 100 primeiros números inteiros positivos.

#include <stdio.h>
int main(){
    int numero, soma;
    soma = 0;
    numero = 1;

    while (numero <= 100) {
        soma = soma + numero;
        numero = numero + 1;
    }

    printf("A soma dos 100 primeiros inteiros positivos é %d\n", soma);

    getchar();
    return 0;
}