#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  printf( "Digite o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf( "Digite o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int iguais = numero1 == numero2;
  int diferentes = numero1 != numero2;
  int maior = numero1 > numero2;
  int menor = numero1 < numero2;
  int menor_igual = numero1 <= numero2;
  int maior_igual = numero1 >= numero2;
  printf("Os numeros sao iguais? %i\n", iguais);
  printf("Os numeros sao diferentes? %i\n", diferentes);
  printf("O numero 1 é maior que o 2? %i\n", maior);
  printf("O numero 1 é menor que o 2? %i\n", menor);
   return 0;
}