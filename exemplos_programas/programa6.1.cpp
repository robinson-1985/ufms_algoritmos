// Programa 6.1: Um exemplo contendo uma estrutura condicional simples.

#include <stdio.h>
int main(){
    int idade;
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    if (idade < 30)
    printf("Nossa! Você é bem jovem!\n");
    printf("Até breve!\n");

    getchar();
    return 0;
}