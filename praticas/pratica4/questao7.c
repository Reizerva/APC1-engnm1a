//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {
  float distancia;
  float angulo;
  printf("Digite a distância percorrida pelo avião: ");
  int deu_certo = scanf("%f", &distancia);
  printf("Digite o ângulo de inclinação do avião: ");
  deu_certo = scanf("%f", &angulo);
  if( angulo <= 45) {
    float altura = distancia * sin(angulo * (3.1416/180));
    printf("A altura alcançada pelo avião é: %.2f\n", altura);
  }
  else {
    printf("O ângulo de inclinação do avião deve ser menor ou igual a 45°\n");
  }
  return 0;
}