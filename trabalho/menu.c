#include <stdio.h>
#include <stdlib.h>

int main() {
  int passou_do_menu = 0;
  int opcao = 0;
  while (passou_do_menu == 0) {
    int deu_certo = system("clear");
    printf("Bem-vindo ao jogo de Damas em Texto!\n");
    printf("1 - Iniciar\n");
    printf("2 - Regras\n");
    printf("3 - Sobre\n");
    printf("4 - Sair\n");
    printf("Opção: ");
    deu_certo = scanf("%i", &opcao);
    switch (opcao) {
      case 1:
      printf("iniciando jogo...\n");
      passou_do_menu = 1;
      break;
      
      case 2:
      printf("Regras de Damas.\n");
      printf("O jogo de damas é praticado em um tabuleiro de 64 casas, claras e escuras. O objetivo do jogo é imobilizar ou capturar todas as peças do adversário. Sob circunstâncias normais, cada peça pode se mover em 2 direções, pelas diagonais, em uma casa por vez. A peça pode capturar uma peça inimiga, se a casa na diagonal diretamente posterior estiver vazia.");
      getchar();
      while (getchar() != '\n');
      break;
      
      case 3:
      printf("Sobre.\n");
      getchar();
      while (getchar() != '\n');
      break;

      case 4:
      printf("Saindo do jogo...\n");
      return 1;

      default:
      printf("Opção inválida. Tente novamente.\n");
      getchar();
      while (getchar() != '\n');
      break;
      
    }
    
  }
  
  return 0;
}