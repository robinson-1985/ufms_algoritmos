// Programa 8.4: Programa para o exercício 8.1.

#include <stdio.h>
int main(){
    int n, numero, soma;
    printf("Informe n: ");
    scanf("%d", &n);
    soma = 0;
    numero = 1;
    
    while (numero <= n) {
        soma = soma + numero;
        numero = numero + 1;
    }
    
    printf("O resultado da soma dos %d primeiros inteiros é %d\n", n, soma);
    
    getchar();
    return 0;
}