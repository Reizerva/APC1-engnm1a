#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("Digite um número: ");
  int deucerto = scanf("%d", &numero);
  if (numero > 0 && numero < 101) {
    for (int i = 1; i <= 100; i++) {
      if (i % numero == 0) {
        printf("%d, ", i);
      }
    }
    printf("\n");
  }
  else {
    printf("Entrada Invalida, bobão\n");
    return 1;
  }
  return 0;
}
