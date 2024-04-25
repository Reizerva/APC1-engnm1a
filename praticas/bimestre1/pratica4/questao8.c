#include <stdio.h>

int main () {
  int tempo_dado;
  printf("Entre com o tempo em segundos: ");
  int deu_certo = scanf("%i", &tempo_dado);
  
  int horas = tempo_dado / 3600;
  int minutos = (tempo_dado % 3600) / 60;
  int segundos = (tempo_dado % 60) % 60;

  printf("%i equivale a %i horas, %i minutos e %i segundos\n", tempo_dado, horas, minutos, segundos);
  
  return 0;
}