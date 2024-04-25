#include <stdio.h>
#include <math.h>

int main() {
  float numero;
  printf("Digite um número: ");
  int deu_certo = scanf("%f", &numero);
  if (deu_certo == 0) {
    printf("Digita um número, bobão\n");
    return 1;
  }
  float resto = fmodf(numero, 1);
  if (resto == 0)
    printf("O número é inteiro\n");
  else
    printf("O número não é inteiro\n");
  return 0;
}