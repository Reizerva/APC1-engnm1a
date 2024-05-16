#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%d", &numero);
  if (numero > 0 && deu_certo) {
    int divisores = 0;
    for (int i = 1; i <= numero; i++)
      if (numero % i == 0) {divisores++;}
    if (divisores == 2) {
      printf("O número %d é primo.\n", numero);
    } else {
      printf("O número %d não é primo.\n", numero);}
  } else {
      printf("Entrada Invalida!\nEntre com um número inteiro positivo.\n");
    return 1;}
  return 0;
}