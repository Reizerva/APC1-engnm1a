#include <stdio.h>

int main() {
  float numerogigabytes;
  printf("Digite o tamanho do arquivo em Gigabytes: ");
  int deu_certo = scanf("%f", &numerogigabytes);

  float valorbytes = numerogigabytes * 1024 * 1024 * 1024;
  printf(" %.2f Gigabytes equivale a %.2f bytes\n", numerogigabytes, valorbytes);
  return 0;
}