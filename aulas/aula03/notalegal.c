#include <stdio.h>

int main() {
  printf("\x1b[3m---------------------------------------\n");
  printf("\t\tN O T A  L E G A L\t\t\n");
  printf("---------------------------------------\x1b[0m\n");
  printf( "\x1b[36mItem                Qtd       Valor\x1b[0m\n");
  printf("%-16.10s %6i %11.2f\n","Banana nanica", 1, 15.00);
  printf("%-16.10s %6i %11.2f\n","Maca fuji", 10, 50.00);
  printf("%-16.10s %6i %11.2f\n","Uva globo", 5, 25.00);
  //printf("Banana nanica        1         R$ 15,00\n");
  //printf("Maca fuji            10        R$ 50,00\n");
  //printf("Uva globo            5         R$ 26,00\n");
  printf("---------------------------------------\n");
  printf("\x1b[38;5;227mTOTAL .............:%15.2f\x1b[0m\n", 91.00);
  return 0;
}