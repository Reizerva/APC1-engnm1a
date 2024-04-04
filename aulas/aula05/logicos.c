#include <stdio.h>

int main() {
  // 0 < X < 10, 0 < X E X < 10
  
  int numero;
  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);
  
  int maior_que_zero_menor_que_dez = numero > 0 && numero < 10;
  printf("O numero é maior que zero e menor que dez? %i\n", maior_que_zero_menor_que_dez);

  int menor_ou_maior_que_10 = numero < 10 || numero > 10;
  printf("O numero é menor que dez ou maior que dez? %i\n", menor_ou_maior_que_10);
  
  int nao_menor_que_zero = !(numero < 0);
  printf("numero nao é menor que zero? %i\n", nao_menor_que_zero);
  
  return 0;
  
}