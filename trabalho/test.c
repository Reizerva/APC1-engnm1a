#include <stdio.h>
#include <stdlib.h>

int main() {
  char tabuleiro[8][8];
  int i, j;
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      if ((i + j) % 2 == 0) {
        tabuleiro[i][j] = ' ';
      } else {
        if (i < 3) {
          tabuleiro[i][j] = 'O';
        } else if (i > 4) {
          tabuleiro[i][j] = 'X';
        } else {
          tabuleiro[i][j] = ' ';
        }
      }
    }
  }
  int deu_certo = system("clear");i
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
  int vez = 1; // 0 é Jogador 0, 1 é Jogador X
  while (vez == 1) {
    printf("X, escolha a peça que deseja mover (linha coluna): ");
    deu_certo = scanf("%d %d", &i, &j);
    while (getchar() != '\n')
      ;
    if (tabuleiro[i][j] != 'X') {
      printf("Nenhuma peça X encontrada.\n");
    } else {
      printf("X, escolha a posição para onde deseja mover a peça (linha "
             "coluna): ");
      deu_certo = scanf("%d %d", &i, &j);
    }
  }
  return 0;
}
