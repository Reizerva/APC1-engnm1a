//6. Faça um programa em C que calcula as raízes de uma equação do 2° grau atraves da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  printf("Digite o valor de a: ");
  int deu_certo = scanf("%f", &a);
  printf("Digite o valor de b: ");
  deu_certo = scanf("%f", &b);
  printf("Digite o valor de c: ");
  deu_certo = scanf("%f", &c);
  double delta = (b * b) - (4 * a * c);
  double raiz1 = (-b + sqrt(delta)) / (2 * a);
  double raiz2 = (-b - sqrt(delta)) / (2 * a);
  printf("A raiz da equação positiva é: %.2f\n", raiz1);
  printf("A raiz da equação negativa é: %.2f\n", raiz2);
  
  return 0;
}