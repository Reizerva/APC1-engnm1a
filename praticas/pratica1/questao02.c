/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {
  float base;
  float altura;
  printf("Digite a base do triângulo: ");
  scanf("%f", &base);

  printf("Digite a altura do triângulo: ");
  scanf("%f", &altura);

  float area = (base * altura) / 2;
  printf("A área do triângulo é %f\n", area);
  return 0;
}