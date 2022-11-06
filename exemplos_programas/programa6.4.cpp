// Programa 6.4: Uma possível solução para o exercício 6.1.

#include <stdio.h>
int main(){
    int temperatura;
    printf("Informe uma temperatura (em graus Celsius): ");
    scanf("%d", &temperatura);

    if (temperatura > 30)
    printf("Hojé é um dia bem quente!\n");
    else
    printf("Hoje não está tão quente.\n");

    getchar();
    return 0;
}