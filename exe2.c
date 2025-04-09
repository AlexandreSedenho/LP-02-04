#include <stdio.h>

int sub3(int x);

int main(void) {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  
  printf("recebido: %d\n", numero);
  
  int resultado = sub3(numero);

  printf("resultado: %d\n", resultado);
  
  printf("Atual: %d\n", numero);
  return 0;
}

int sub3(int x) {
  return x - 3;
}