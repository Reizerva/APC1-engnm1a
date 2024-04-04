#include <stdio.h>

int main() {
  int idade_anos;
  printf("Digite os anos da sua idade: ");
  int deu_certo = scanf("%i", &idade_anos);
  int idade_meses;
  printf("Digite os meses da sua idade: ");
  deu_certo = scanf("%i", &idade_meses);
  int idade_dias;
  printf("Digite os dias da sua idade: ");
  deu_certo = scanf("%i", &idade_dias);
  
  int dias = idade_anos * 365 + idade_meses * 30 + idade_dias;
  printf("Você já aguentou %i dias!\nContinue assim!\n", dias);
  return 0;
}