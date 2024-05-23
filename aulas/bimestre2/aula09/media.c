#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int numeros[10];
  
  numeros[0] = 1;
  numeros[8] = 5;

  int soma = 0;
  for (int i = 0; i < 10; i++) {
    printf("Digite o %io número: ", i+1);
    int deu_certo = scanf("%d", &numeros[i]);
    soma = soma + numeros[i];
  }

  float media = soma /10.0f;
  printf("A media desses números é ");
  for (int i = 0; i < 9; i++) {
    printf("%d, + ", numeros[i]);
  }
  printf("%d = %.2f\n", numeros[9], media);
  
  return 0;
}