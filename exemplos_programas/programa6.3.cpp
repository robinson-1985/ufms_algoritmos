// Programa 6.3: Um exemplo de troca de conteúdos entre variáveis do mesmo tipo.

#include <stdio.h>
int main(){
    int x, y, aux;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);

    if (x > y){
        aux = x;
        x = y;
        y = aux;
    }
    
    printf("%d é menor ou igual a %d\n", x, y);
    return 0;
}