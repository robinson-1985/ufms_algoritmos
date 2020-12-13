// Programa 9.1: Solução para o exercício 9.1.

#include <stdio.h>
int main(){
    int n, conta, num, soma;
    printf("Informe n: ");
    scanf("%d", &n);
    soma = 0;
    conta = 1;
    
    while (conta <= n) {
        printf("Informe um número: ");
        scanf("%d", &num);
        if (num > 0)
            soma = soma + num;
            conta = conta + 1;
        
    }
    
    printf("A soma dos números positivos da seqüência é %d.\n", soma);
    
    getchar();
    return 0;
}