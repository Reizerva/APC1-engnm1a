#include <stdio.h>

int main() {
  float valor_bruto, valor_descontado, desconto;
  printf("Entre com o valor bruto do produto:  ");
  int deu_certo = scanf("%f", &valor_bruto);
  if (deu_certo != 1) {
    printf("Dá um valor certo capeta \n");
    return 1;
    }
  if (valor_bruto > 500.0f) {
    desconto = 0.1f * valor_bruto;
    valor_descontado = valor_bruto - desconto;
    printf("Valor Liquido: %.2f\nDesconto: %.2f\n", valor_descontado, desconto);
  }
  else if (valor_bruto > 100.0f){
    desconto = 0.05f * valor_bruto;
    valor_descontado = valor_bruto - desconto;
    printf("Valor Liquido: %.2f\nDesconto: %.2f\n", valor_descontado, desconto);
  }
  else {
    desconto = 0.01f * valor_bruto;
    valor_descontado = valor_bruto - desconto;
    printf("Valor Liquido: %.2f\nDesconto: %.2f\n", valor_descontado, desconto);
  }
  return 0;
}