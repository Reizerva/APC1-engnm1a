#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero);
  if (deu_certo == 0) {
    printf("O número não é válido.\n");
    return 1;
  }
  if (numero % 2 == 0)
    printf("O número %i é par\n", numero);
  else
    printf("O número %i é ímpar\n", numero);
  return 0;
}