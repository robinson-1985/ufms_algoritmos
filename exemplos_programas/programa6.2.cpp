// Programa 6.2: Um exemplo usando uma estrutura condicional composta.

#include <stdio.h>
int main(){
    int idade;
    printf("Quantos anos você tem? ");
    scanf("%d", &idade);
    
    if (idade < 30)
    printf("Nossa! Você é bem jovem!\n");
    else
    printf("Puxa! Você já é velhinho!\n");
    printf("Até breve!\n");

    getchar();
    return 0;
}