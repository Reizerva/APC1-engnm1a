/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%
*/
#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.00f;
  float tota_de_horas_trabalhadas = 100.00f;
  const float IR = 0.25f;
  const float INSS = 0.11f;
  float salario_bruto = valor_da_hora_de_trabalho * tota_de_horas_trabalhadas;
  float imposto_de_renda = salario_bruto * IR;
  float imposto_previdencia = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_de_renda - imposto_previdencia;
  printf("\033[38;2;255;189;122m------------------------------\n");
  printf("   C O N T R A  C H E Q U E   \n");
  printf("------------------------------\n");
  printf("Salario bruto....: R$ %8.2f\n", salario_bruto);
  printf("Imposto de renda.: R$ %8.2f\n", imposto_de_renda);
  printf("Imposto da previd: R$ %8.2f\n", imposto_previdencia);
  printf("Salario Liquido..: R$ %8.2f\x1b[0m\n", salario_liquido);
  return 0;
}