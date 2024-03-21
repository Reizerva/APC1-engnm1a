#include <stdio.h>

int main() {
  char nome1[32];
  int quantos1;
  float preco1;
  
  printf("Digite o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome1);
  
  printf("Digite a quantidade do produto: ");
  deu_certo = scanf("%i", &quantos1);
  
  printf("Entre com o preço do produto: ");
  deu_certo = scanf("%f", &preco1);
  printf("---------------------------------------\n");
  printf("           N O T A L E G A L           \n");
  printf("---------------------------------------\n");
  printf( "Item                Qtd       Valor\n");
  printf("%-16.10s %6i %11.2f\n",nome1, quantos1, preco1);
  
  return  0;
}