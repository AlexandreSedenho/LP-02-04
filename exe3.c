#include <stdio.h>

void sub3(int *enderecoX);

int main(void) {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  
  printf("recebido: %d\n", numero);

  sub3(&numero);

  printf("resultado: %d\n", numero);
  
  printf("Atual: %d\n", numero);
  return 0;
}

void sub3(int *enderecoX) {
  *enderecoX = *enderecoX - 3;
}