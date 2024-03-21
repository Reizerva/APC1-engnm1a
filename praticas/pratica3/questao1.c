/*
Faça um programa que calcula média final a partir da fórmula (0,4 x A1) + (0,6 x A2).
*/

#include <stdio.h>

int main() {
  int a1 = 0;
  int a2 = 0;
  float media = 0.0f;
  
  printf("Nota da A1: ");
  scanf("%d", &a1);
  printf("Nota da A2: ");
  scanf("%d", &a2);
  media = (0.4 * a1) + (0.6 * a2);
  printf("A média é: %.1f\n", media);
  
  return 0;
}