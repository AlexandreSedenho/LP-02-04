#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    
    while(1) {
        printf("Digite um número de 1 a 6: ");
        scanf("%d", &numero);
        
        if (numero % 2 != 0) {
            break;
        }
        soma += numero;
    }
    printf("Jogo encerrado! Soma dos números pares: %d\n", soma);
    return 0;
}
