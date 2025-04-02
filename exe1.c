#include <stdio.h>

int main() {
    int contador = 1;
    int fim = 3;
    int x = 0;
    
    do {
        printf("Digite o número: ");
        scanf("%d", &x);
        
        if( x == 7 ) {
            printf("Você ganhou\n");
            return 0;
        }else{
            printf("Número errado (Tentativas restantes: %d)\n", fim-contador);
        }
        contador++;
    }while( contador <= fim );
    return 0;
}
