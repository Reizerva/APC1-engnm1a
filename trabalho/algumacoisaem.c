#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
//  printf("Iniciando jogo.\n");
//  printf("Suas peças: O/@\n Peças do seu oponente: X/#");
  float tabuleiro[8][8];
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j){
      int l = 0;
      tabuleiro[i][j] = l;
      l++;
    }
  }
/*  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
       if ((int)tabuleiro[i][j] % 2 == 0) {
          tabuleiro[i][j] = 0;
         } else {tabuleiro[i][j] = 1;}
        }
    }*/
  for (int i = 0; i < 8; ++i) {
     for (int j = 0; j < 8; ++j){
       printf("%d", (int)tabuleiro[i][j]);
     }
    printf("\n");
  }
  return 0;
}