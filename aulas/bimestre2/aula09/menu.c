#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
  int opcao;
  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Ranking\n");
    printf("3 - Regras\n");
    printf("4 - Sair\n");
    printf("Opção: ");
    deu_certo = scanf("%d", &opcao);
    while (getchar() != '\n')
      ;
    if (!deu_certo) {
      opcao = 0;
    }
    switch (opcao) {
    default:
      printf("Opção inválida! Pressione START para repetir\n");
      getchar();
      break;
    case 1: {
      printf("Iniciando jogo...\n");
      char player[31];
      char choice[1] = "n";
      while (choice[0] == 'N' || choice[0] == 'n') {
        deu_certo = system("clear");
        printf("Insira o Nome do Jogador 1: ");
        deu_certo = scanf("%[^\n]s", player);
        while (getchar() != '\n');
        printf("%s...\nEsse nome está correto? (S/N): ", player);
        deu_certo = scanf("%s", choice);
      }
        break;
      }
    case 2:
      printf("Abrindo a Tabela de Ranking...\n");
      getchar();
      break;
    case 3:
      printf("Insira a explicação das regras aqui.\n");
      getchar();
      break;
    case 4:
      printf("Fechando o jogo...\n");
      deu_certo = system("clear");
      break;
    }
  }
  return 0;
}