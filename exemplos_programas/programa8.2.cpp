// Programa 8.2: Um programa para imprimir os inteiros de 1 a 100.

#include <stdio.h>
    int main(){
    int numero;
    numero = 1;
    
    while (numero <= 100) {
        printf("%d\n", numero);
        numero = numero + 1;
    }
    
    getchar();
    return 0;
}