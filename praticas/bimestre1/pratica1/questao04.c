/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preco_inicial;
  printf("Digite o preço inicial do produto: ");
  scanf("%f", &preco_inicial);
  
  float preco_final = preco_inicial * (1 + ICMS + COFINS + PIS_PASEP);
  float preco_no_comeco = preco_inicial;
  float icms = preco_inicial * ICMS;
  float cofins = preco_inicial * COFINS;
  float pis_pasep = preco_inicial * PIS_PASEP;
  float impostos = icms + cofins + pis_pasep;
  printf("O preço inicial do produto é %f\n", preco_no_comeco);
  printf("O ICMS é %f\n", icms);
  printf("O COFINS é %f\n", cofins);
  printf("O PIS/PASEP é %f\n", pis_pasep);
  printf("O preço dos impostos total é %f\n", impostos);
  printf("O preço final do produto é %f\n", preco_final);
  
  return 0;
}